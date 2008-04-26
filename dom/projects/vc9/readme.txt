When you're going to be committing modifications to Subversion, you shouldn't
edit the VC9 files directly. Instead edit the VC8 files and run the vc8to9
Python script provided in the 'projects' folder like this:

cd <dom-path>/projects
python vc8to9.py projects/vc8 convertVC8Tags
