#include <iostream>
using namespace std;

/*
There are 3 ways to pass a parameter

1. Pass by value / Call by value
2. Call by address
3. Call by referece

1. Pass by value / Call by value: The function receives a copy of the argument's value, and changes to the parameter inside the function do not affect the original value.

2. Call by address: The function receives the memory address (pointer) of the argument, allowing it to modify the original value indirectly.

3. Call by reference: The function receives a reference to the original argument, enabling direct modifications to the original value within the function.

*/

// CALL BY VALUE
int callByValue(int a, int b)
{

    int c;
    c = a + b;

    return c;
}

// CALL BY ADDRESS
void callByAddress(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// CALL BY REFERENCE
void callByReference(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{

    int num1 = 5, num2 = 10, sum;

    // CALL BY VALUE
    sum = callByValue(num1, num2);
    cout << sum;

    // CALL BY ADDRESS
    callByAddress(&num1, &num2);

    // CALL BY REFERENCE
    callByReference(num1, num2);

        return 0;
}
