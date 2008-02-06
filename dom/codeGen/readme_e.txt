Code generator usage
--------------------

Windows:   bin\php gen.php schema [cprt]
Linux/Mac: php gen.php schema [cprt]

schema    File name of the COLLADA schema document
cprt      Generate the files with an SCEA shared source copyright notice

When running the code generator under Windows, be sure to use the php provided in the bin 
directory. Don't install the latest php and try to use that. The latest php comes with a 
php.ini file whose settings are totally incompatible with the code used in the DOM code 
generator. If you get tons of errors when you run the code generator, it may be because 
php is using a php.ini file that's incompatible with the code generator. Check 
C:\Program Files\PHP and delete php.ini if it's there. Be careful though, as this will 
affect any other PHP programs on your system as well.

On Linux/Mac, you should be able to use the PHP 5 that comes with your distro for running
the code generator.
