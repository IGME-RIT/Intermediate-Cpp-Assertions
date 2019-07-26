/*
Assertions
(c) 2016
Author: David Erbelding
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/



// Include iostream for output during the program.
#include <iostream>
using namespace std;


// assert is a special macro designed to help you improve your code.
// Essentially, it adds extra checks into your program that will stop everything immediately if they fail.
// This can be helpful in finding dangerous bugs (like memory corruption) before you release your project.

// You might think that this would be bad, as it would crash your program on your users, but it won't.
// assert is designed to automatically be removed when you compile your code to release.

// #define NDEBUG  // if NDEBUG is defined, your assertions will all be removed. 
                // This is for speeding up your code after you have throughly tested without the asserts triggering.

#include "assert.h" // To actually start using assertions, just include assert.h




// Let's look at a situation where you might want to use assertions:

// Here we have a function that counts the length of a string, by iterating until it finds a null terminator.
unsigned int GetStringLength(const char* str)
{
    assert(str != nullptr); // First we assert that the pointer we were given isn't a null pointer.
                            // If someone passes a null pointer to this function, the program will stop them.

    int i = 0;              // Start at index 0
    while (str[i] != '\0')  // Loop until reaching a null terminator.
    {
        i++;
    }
    return i;               // return the index of the null terminator.
}




// Start of main function
int main() 
{
    // Passing in a regular string works just fine:
    cout << GetStringLength("hello world!") << endl;

    // Passing in a null pointer causes the assertion to fail.
    char* unusedString = nullptr;
    cout << GetStringLength(unusedString);

    // An assertion indicates that there is a serious error in your game.
    // After seeing the assertion fail you'll know that there is an error somewhere, and you can fix it.

    // Try testing this with #define NDEBUG uncommented, and see what happens.




    // A common trick with assertions is to do something like this:
    int a = 2;
    int b = 3;
    assert(a > b && "Test failed, a should be greater than b.");

    // Since strings always evaulate to true, the string won't affect the test.
    // but it will be output by the assertion when it fails



    return 0;
}