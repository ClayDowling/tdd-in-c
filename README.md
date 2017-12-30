# Test Driven Development in C Example

This is an example of how to write test driven code in C.

It is intended to run on Microsoft Windows, using the mingw tool suite.
It has been tested with Windows 10 and the latest (as of this writing)
mingw64.  

To build the project, open a command shell and change to this directory.
Enter the command `mingw32-make`

## Running on Other Operating Systems

This will mostly run on any operating system, with a few caveats.  The
`clean` targets are Windows specific, because there is not a default
`rm` command on Windows.  You'll need to replace `del` with `rm -f` if
you're running on something other than Windows to have a working `clean`
target.
