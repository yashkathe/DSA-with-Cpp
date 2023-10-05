#include <iostream>
using namespace std;

int power(int m, int n)
{
    if (n == 0)
        return 1;
    return power(m, n - 1) * m;
}

int power2(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return power2(m * m, n / 2);
    }
    else
    {
        return m * power2(m * m, (n - 1) / 2);
    }
}

int main()
{

    int r = power(2, 5);
    int r2 = power2(5,2);
    cout << r << endl; // 32
    cout << r2 << endl; // 25

    return 0;
}
