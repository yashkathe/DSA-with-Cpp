/*

TAYLOR SERIES

1 + x / 1 + x^2 / 2! + x^3 / 3! ,,, n terms

*/

#include <iostream>
using namespace std;

double e(int x, int n)
{
    static double pow = 1, fact = 1;
    double r;

    if (n == 0)
        return 1;
    r = e(x, n - 1);
    pow = pow * x;
    fact = fact * n;
    return r + pow / fact;
    
}

int main()
{
    double ans = e(3, 10); //20.0797
    cout << ans << endl;

    return 0;
}
