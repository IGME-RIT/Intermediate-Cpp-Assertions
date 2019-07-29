Documentation Author: Niko Procopi 2019

This tutorial was designed for Visual Studio 2017 / 2019
If the solution does not compile, retarget the solution
to a different version of the Windows SDK. If you do not
have any version of the Windows SDK, it can be installed
from the Visual Studio Installer Tool

Welcome to the Assert Tutorial!
Prerequesites: none

"Assert" is a very powerful debug tool.
It is just like an 'if' statement. When the condition inside
the assert statement is false, it will stop your program, and
the debugger will take you to the assert statement.

When you run this program, it will crash during runtime, 
it is designed to do that

Lets pretend you have a variable like:
int numberFilesLoadedCorrectly = 0;

Lets pretend every time you load a file, without errors, you
increment that variable, and lets say there are 10 files you want
to load, you could use an assert to confirm that all the files loaded
correctly:

assert (numberFilesLoadedCorrectly == 10);

If there are not 10 files loaded correctly, the debugger 
will crash here, and then you can fix the error.
