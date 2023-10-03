/*
A REFRENCE is an alias, or an alternate name to an existing variable

REFERENCE variable is useful i parameter passinng
so we can use REFERENCE variables to write small functions

*/

#include <iostream>
using namespace std;

int main()
{

    int a = 10;

    // & is used to decalre a REFRENCE variable
    // and you have to assign a value as soons as you declare it
    int &r = a;
    // refrence doesnt consume memory it uses same memory of 'a'

    cout << a << endl
         << r << endl; // 10 , 10

    int b = 25;
    r = b;
    // Now this doesnt mean r will be refrence to b
    // it means : value of a is now 25 because it is a reference of a

    return 0;
}
