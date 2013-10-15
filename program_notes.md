Program Notes
=============

Notes and grades for specific programs.

[Program 1](Program 1) - 100/100
---------

1.  It is best not to mix system header files that require the std namespace
    and older system header files that do not.

    You have:

        #include <iostream>
        #include <math.h>

    Better:

        #include <iostream>
        #include <cmath>

2.  I would like to be able to use your printChar function to print a table of
    ASCII codes. I cannot do that because you print extra stuff in your
    printChar function:  

        cout << "The binary representation of " << input << " is: ";
        . . .
        cout << endl;

    This label and the newline are not part of the binary representation of the
    character and should not be printed in the printChar function. These belong
    in the application (your test program).

    Same comment for your other print functions.

3.  Output streams consist of a sequence of characters. Converting an integer
    to characters for output is a complex process:

        cout << 1;

    Displaying a string may generate code that includes a loop:
 
        cout << “1”;
 
    It is much more efficient to display a character:
 
        cout << ‘1’;
