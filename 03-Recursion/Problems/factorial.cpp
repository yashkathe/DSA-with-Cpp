#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;

    return factorial(n - 1) * n;
}

int main()
{
    int ans;
    ans = factorial(5);

    cout << ans << endl; //120

    return 0;
}
