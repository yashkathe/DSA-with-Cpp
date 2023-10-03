// Grouping Instructions = Function

#include <iostream>
using namespace std;

int add(int a, int b)
{

    int c;
    c = a + b;

    return c;
}

int main()
{

    int num1, num2, sum;

    sum = add(5, 10);

    cout << sum;

    return 0;
}
