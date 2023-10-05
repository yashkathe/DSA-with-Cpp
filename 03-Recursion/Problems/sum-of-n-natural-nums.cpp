#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return sum(n - 1) + n;
}

int main()
{

    int ans;
    ans = sum(10);

    cout << ans << endl; //55

    return 0;
}
