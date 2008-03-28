import sys, os, xml, zipfile, string
from os import path
from xml.dom import minidom, Node
from zipfile import ZipFile

colladaVersion = '1.4'
domVersion = "2.0"
colladaVersionNoDots =  colladaVersion.replace('.', '')
domVersionNoDots = domVersion.replace('.', '')
vs8Devenv = "\"C:\\Program Files\\Microsoft Visual Studio 8\\Common7\\IDE\\devenv\""

def disableDebugInfoRecursive(node):
    if node.nodeType == Node.ELEMENT_NODE and node.tagName == "Tool":
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
    root.writexml(open(projectPath, "w"))

def setupReleaseCopy(codePath):
    sfdom = 'https://collada-dom.svn.sourceforge.net/svnroot/collada-dom'

    if not path.exists(codePath):
        print "Checking out DOM version " + domVersion + " to " + codePath
        os.system('svn co -q ' + sfdom + '/tags/' + domVersion + ' ' + codePath)
        if not path.exists(codePath):
            print "svn checkout failed"
            sys.exit(2)
        print "Removing debug info from the debug build"
        projPath = path.join(codePath, "dom", "projects", "vc8")
        projs = map(lambda p: path.join(projPath, p), \
                        ["dom.vcproj", "dom-static.vcproj", "domTest.vcproj"])
        map(disableDebugInfo, projs)

def checkBinaries(buildPath):
    components = path.split(buildPath)[1].split('-')
    debug = '-d' if len(components) > 2 else ''
    staticDebug = '-sd' if len(components) > 2 else '-s'
    domFilePrefix = path.join(buildPath, "libcollada" + colladaVersionNoDots + "dom" + domVersionNoDots)
    return path.exists(domFilePrefix + debug + ".dll") \
        and path.exists(domFilePrefix + debug + ".lib") \
        and path.exists(domFilePrefix + staticDebug + ".lib")

def checkBuildResult(codePath):
    if not checkBinaries(path.join(codePath, "dom", "build", "vc8-1.4-d")):
        return False
    return checkBinaries(path.join(codePath, "dom", "build", "vc8-1.4"))

def packageRecursive(zip, packagePath, fileExt, archivePrefix):
    for root, dirs, files in os.walk(packagePath):
        for file in files:
            if fileExt == None or path.splitext(file)[1] == fileExt:
                archivePath = path.join(root, file)
                commonIndex = len(path.commonprefix([archivePath, packagePath]))
                archivePath = archivePath[commonIndex:]
                if archivePath[0] == os.sep:
                    archivePath = archivePath[1:]
                archivePath = path.join(archivePrefix, archivePath)
                zip.write(path.join(root, file), archivePath)
        if '.svn' in dirs:
            dirs.remove('.svn')

def packageFiles(archivePath, codePath, archivePrefix):
    domLibPrefix = 'libcollada' + colladaVersionNoDots + 'dom' + domVersionNoDots
    files = [domLibPrefix + '.dll', domLibPrefix + '.lib', domLibPrefix + '-s.lib', \
             domLibPrefix + '-d.dll', domLibPrefix + '-d.lib', domLibPrefix + '-sd.lib']
    files = [path.join(codePath, 'dom', 'build', dir, file) for file in files for dir in ['vc8-1.4-d', 'vc8-1.4']]
    files += [path.join(codePath, 'dom', 'build', 'vc8-1.4', 'domTest.exe')]
    files = filter(lambda file: path.exists(file), files)
    z = ZipFile(archivePath, 'w', zipfile.ZIP_DEFLATED)
    [z.write(file, path.join(archivePrefix, 'bin', path.basename(file))) for file in files]
    packageRecursive(z, path.join(codePath, 'dom', 'include'), '.h', path.join(archivePrefix, 'include'))
    packageRecursive(z, path.join(codePath, 'dom', 'test', 'data'), None, \
                     path.join(archivePrefix, 'bin', 'domTestData'))
    z.write(path.join(codePath, 'dom', 'readme.txt'), path.join(archivePrefix, 'readme.txt'))

# basename: path.splitext(path.basename(archivePath))[0]

def main():
    if len(sys.argv) < 2:
        print "Usage: release.py pathToUseForReleaseBuild"
        return 2

    releasePath = path.abspath(sys.argv[1])
    if not path.exists(releasePath):
        print "Creating directory for release build"
        os.mkdir(releasePath)

    if not path.exists(releasePath):
        print "Couldn't create " + releasePath
        return 2

    vs8Path = path.join(releasePath, "domReleaseVC8")
    vs9Path = path.join(releasePath, "domReleaseVC9")
    setupReleaseCopy(vs8Path)
    setupReleaseCopy(vs9Path)

    print "Doing VS8 build"
    os.execvp(vs8Path + "\\dom\\projects\\vc8\\build.bat", ())

    # This could be automated but I don't have a copy of VS9. Argh!
    print "\n\nTime for the VS9 build. Make sure the project files in the VS9 path are converted,\n" \
        + "then open the solution and do both a debug and release build. Press enter when\n" \
        + "the build is finished."
    raw_input("Waiting for user response...")

    # Check to make sure all the binaries are there
    print "Checking that all files are present (i.e. the build really worked)"
    if not checkBuildResult(vs8Path):
        print "VS8 build seems to have failed. Not all files are present."
        return 2
    if not checkBuildResult(vs9Path):
        print "VS9 build seems to have failed. Not all files are present."
        return 2

    packageFiles(path.join(releasePath, 'colladadom-vc8.zip'), vs8Path, 'colladadom')
    packageFiles(path.join(releasePath, 'colladadom-vc9.zip'), vs9Path, 'colladadom')

    # Build RT and add it to the VC8 zip file
    os.execvp(path.join(vs8Path, 'rt', 'projects', 'VC++8', 'build.bat'), ())
    rt = path.join(vs8Path, 'rt', 'bin', 'vc8_1.4', 'COLLADA_RT_VIEWER.exe')
    if not path.exists(rt):
        print "RT build seems to have failed"
        return 2
    zip = ZipFile(path.join(releasePath, 'colladadom-vc8.zip'), 'a', zipfile.ZIP_DEFLATED)
    zip.write(rt, path.join(archivePrefix, 'COLLADA_RT_VIEWER.exe'))

main()

# for root, dirs, files in os.walk(path.join('c:\\dom\\trunk\\dom\\test\\data')):
#     print root
#     print dirs
#     print files
#     print "\n\n"

# releasePath = path.abspath(sys.argv[1])
# vs8Path = path.join(releasePath, "dom-release-vs8")
# archivePrefix = 'colladadom'
# packageFiles(path.join(releasePath, 'colladadom-vc8.zip'), vs8Path, archivePrefix)

# # Build RT and add it to the zip file
# os.execvp(path.join(vs8Path, 'rt', 'projects', 'VC++8', 'build.bat'), ())
# rt = path.join(vs8Path, 'rt', 'bin', 'vc8_1.4', 'COLLADA_RT_VIEWER.exe')
# if not path.exists(rt):
#     print "RT build seems to have failed"
#     sys.exit(2)
# zip = ZipFile(path.join(releasePath, 'colladadom-vc8.zip'), 'a', zipfile.ZIP_DEFLATED)
# zip.write(rt, path.join(archivePrefix, 'COLLADA_RT_VIEWER.exe'))

#os.system("zip -h")
#print os.execvp("zip", ("zip",) + ("-h",))
#print checkBuildResult("C:\\dom\\dom-release-vs8")

# "C:\Program Files\Microsoft Visual Studio 8\Common7\Tools\vsvars32.bat"
