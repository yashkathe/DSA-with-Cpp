// String Reversal

#include <iostream>
using namespace std;

string reverseString(string input)
{
    if (input == "")
    {
        return "";
    }

    return reverseString(input.substr(1)) + input[0];
}

int main()
{

    string input = "Hello";
    string reverse = reverseString(input);

    cout << reverse << endl;

    return 0;
}

/*
HELLO

...
"llo" + e
"ello" + h
*/


/*

1. When can I no longer continue ?
> When strig is empty

2. Whats the smallest unit of work I can do to contribute to the goal ?
> Pick a character and continue

*/

// --------------------------------------------------

/*

Synatax Questions

In C++, the substr function is a member function of the std::string class, and it is used to
extract a substring (a portion of a string) from a given string. The substr function takes one or two arguments:

1. Position (start index): This is the index in the original string where the substring extraction will begin.
The indexing starts from 0 for the first character.

2. Length (optional): This is the number of characters to include in the substring. If this argument is not provided,
the substr function will extract characters from the start index to the end of the string.

*/

//---------------------------------------------

/*

#include <iostream>
using namespace std;

string reverseString(string input) {
    // Base case: if the input string is empty or has only one character, it's already reversed.
    if (input.length() <= 1) {
        return input;
    }

    // Recursive step: reverse the substring from the second character to the end and add the first character at the end.
    return reverseString(input.substr(1)) + input[0];
}

int main() {
    string input = "Hello, World!";
    string reversed = reverseString(input);
    cout << "Original: " << input << endl;
    cout << "Reversed: " << reversed << endl;

    return 0;
}

*/
