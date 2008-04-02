import sys, os, xml, zipfile, string, tarfile
from os import path
from os.path import join
from xml.dom import minidom, Node
from zipfile import ZipFile
pfrom tarfile import TarFile, TarFileCompat

windows  =  sys.platform == 'win32'
linux    =  sys.platform == 'linux2'
mac      =  sys.platform == 'darwin'
colladaVersion = '1.4'
domVersion = '2.0'
colladaVersionNoDots =  colladaVersion.replace('.', '')
domVersionNoDots = domVersion.replace('.', '')
numBuildThreads = 4

def disableDebugInfoRecursive(node):
    if node.nodeType == Node.ELEMENT_NODE and node.tagName == 'Tool':
        attr = node.getAttributeNode('DebugInformationFormat')
        if attr:
            attr.nodeValue = '0'
        attr = node.getAttributeNode('GenerateDebugInformation')
        if attr:
            attr.nodeValue = 'false'
    map(disableDebugInfoRecursive, node.childNodes)

def disableDebugInfo(projectPath):
    root = minidom.parse(projectPath)
    disableDebugInfoRecursive(root.childNodes[0])
    root.writexml(open(projectPath, 'w'))

def setupReleaseCopy(codePath):
    sfdom = 'https://collada-dom.svn.sourceforge.net/svnroot/collada-dom'

    if not path.exists(codePath):
        print 'Checking out DOM version ' + domVersion + ' to ' + codePath
        os.system('svn co -q ' + sfdom + '/tags/' + domVersion + ' ' + codePath)
        if not path.exists(codePath):
            print 'svn checkout failed'
            sys.exit(2)
        if windows:
            print 'Removing debug info from the debug build'
            projPath = join(codePath, 'dom', 'projects', 'vc8')
            projs = map(lambda p: join(projPath, p),
                        ['dom.vcproj', 'dom-static.vcproj', 'domTest.vcproj'])
            map(disableDebugInfo, projs)

def checkFilesExist(dir, files):
    for file in files:
        if not path.exists(join(dir, file)):
            return False
    return True

def packageRecursive(zip, packagePath, fileExt, archivePrefix):
    for root, dirs, files in os.walk(packagePath):
        for file in files:
            if fileExt == None or path.splitext(file)[1] == fileExt:
                archivePath = join(root, file)
                commonIndex = len(path.commonprefix([archivePath, packagePath]))
                archivePath = archivePath[commonIndex:]
                if archivePath[0] == os.sep:
                    archivePath = archivePath[1:]
                archivePath = join(archivePrefix, archivePath)
                zip.write(join(root, file), archivePath)
        if '.svn' in dirs:
            dirs.remove('.svn')

def packageDomFilesCommon(zip, codePath, archivePrefix):
    packageRecursive(zip, join(codePath, 'dom', 'include'), '.h', join(archivePrefix, 'include'))
    packageRecursive(zip, join(codePath, 'dom', 'test', 'data'), None, \
                     join(archivePrefix, 'bin', 'domTestData'))
    zip.write(join(codePath, 'dom', 'readme.txt'), join(archivePrefix, 'readme.txt'))

def packageDomFilesVC(zip, codePath, archivePrefix):
    domLibPrefix = 'libcollada' + colladaVersionNoDots + 'dom' + domVersionNoDots
    debugBuildPath = join(codePath, 'dom', 'build', 'vc8-1.4-d')
    releaseBuildPath = join(codePath, 'dom', 'build', 'vc8-1.4')
    debugFiles = [domLibPrefix + ext for ext in ['-d.dll', '-d.lib', '-sd.lib']]
    releaseFiles = [domLibPrefix + ext for ext in ['.dll', '.lib', '-s.lib']] + ['domTest.exe']
    if not checkFilesExist(debugBuildPath, debugFiles) \
            or not checkFilesExist(releaseBuildPath, releaseFiles):
        print 'VC build seems to have failed. Some files are missing from ' + \
            join(codePath, 'dom', 'build')
    files = [join(debugBuildPath, file) for file in debugFiles] + \
        [join(releaseBuildPath, file) for file in releaseFiles]
    [zip.write(file, join(archivePrefix, 'bin', path.basename(file))) for file in files]
    packageDomFilesCommon(zip, codePath, archivePrefix)

def packageRTFilesVC(zip, codePath, archivePrefix):
    rtBinPath = join(codePath, 'rt', 'bin', 'vc8_1.4')
    rt = join(rtBinPath, 'COLLADA_RT_VIEWER.exe')
    devil = join(rtBinPath, 'DevIL.dll')
    if not path.exists(rt):
        print 'RT build seems to have failed'
        sys.exit(2)
    zip.write(rt, join(archivePrefix, 'bin', 'COLLADA_RT_VIEWER.exe'))
    zip.write(devil, join(archivePrefix, 'bin', 'DevIL.dll'))

def packageDomFilesLinux(zip, codePath, archivePrefix):
    buildPath = join(codePath, 'dom', 'build', 'linux-1.4')
    domLibPrefix = 'libcollada' + colladaVersionNoDots + 'dom'
    files = [domLibPrefix + ext for ext in ['.a', '.so', '.so.2', '.so.2.0']]
    print files
    files += ['domTest']
    if not checkFilesExist(buildPath, files):
        print 'Build seems to have failed'
        sys.exit(2)
    files = [join(buildPath, file) for file in files]
    [zip.write(file, join(archivePrefix, 'bin', path.basename(file))) for file in files]
    packageDomFilesCommon(zip, codePath, archivePrefix)

# basename: path.splitext(path.basename(archivePath))[0]

def packageWindows(releasePath):
    vc8Path = join(releasePath, 'domReleaseVC8')
    vc9Path = join(releasePath, 'domReleaseVC9')
    setupReleaseCopy(vc8Path)
    setupReleaseCopy(vc9Path)

    print 'Doing VC8 build'
    os.spawnl(os.P_WAIT, join(vc8Path, 'dom', 'projects', 'vc8', 'build.bat'))

    # This could be automated but I don't have a copy of VC9. Argh!
    print '\n\nTime for the VC9 build. Make sure the project files in the VC9 path are converted,\n' \
        + 'then open the solution and do both a debug and release build. Press enter when\n' \
        + 'the build is finished.'
    raw_input('\nWaiting for user response...')
    print 'ok'

    vc8Zip = ZipFile(join(releasePath, 'colladadom-vc8.zip'), 'w', zipfile.ZIP_DEFLATED)
    vc9Zip = ZipFile(join(releasePath, 'colladadom-vc9.zip'), 'w', zipfile.ZIP_DEFLATED)
    packageDomFilesVC(vc8Zip, vc8Path, 'colladadom')
    packageDomFilesVC(vc9Zip, vc9Path, 'colladadom')

    # Build RT and add it to the VC8 zip file
    print 'Building RT'
    os.spawnl(os.P_WAIT, join(vc8Path, 'rt', 'projects', 'VC++8', 'build.bat'))
    packageRTFilesVC(vc8Zip, vc8Path, 'colladadom')

def packageLinux(releasePath):
    codePath = join(releasePath, 'domRelease')
    setupReleaseCopy(codePath)

    print 'Building the DOM'
    os.system('make' + ' -C ' + join(codePath, 'dom') + ' -k' + \
               ' -j ' + str(numBuildThreads) + ' conf=release')

    zip = TarFileCompat(join(releasePath, 'colladadom.tar.gz'), 'w', tarfile.TAR_GZIPPED)
    packageDomFilesLinux(zip, codePath, 'colladadom')

def main():
    if len(sys.argv) < 2:
        print 'Usage: release.py pathToUseForReleaseBuild'
        return 2

    releasePath = path.abspath(sys.argv[1])
    if not path.exists(releasePath):
        print 'Creating directory for release build'
        os.mkdir(releasePath)

    if not path.exists(releasePath):
        print 'Couldn't create ' + releasePath
        return 2

    if windows:
        packageWindows(releasePath)
    elif linux:
        packageLinux(releasePath)
    elif mac:
        packageMac(releasePath)

    print 'Packaging successful!'

main()

# releasePath = path.abspath(sys.argv[1])
# vc8Path = join(releasePath, 'domReleaseVC8')
# packageDomFilesVC(join(releasePath, 'colladadom-vc8.zip'), vc8Path, 'colladadom')
# packageRTFilesVC(join(releasePath, 'colladadom-vc8.zip'), vc8Path, 'colladadom')
