#include <iostream>
using namespace std;

int func(int n)
{

    static int x = 0; // it will work the same even if you make a global variable outside this function
    if (n > 0)
    {   
        x++;
        return func(n - 1) + x;
    }

    return 0;
}

int main()
{

    int r;
    r = func(5); // 25
    // r = func(5); // 50
    // r = func(5); // 75
    // if I run the function again and again it will keep on adding to value of x
    // which is the same for if it were a global variable
    cout << r << endl;

    return 0;
}
