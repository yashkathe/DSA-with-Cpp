#include <iostream>
using namespace std;

void func(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        func(n - 1);
        func(n - 1);
    }
}

int main()
{
    func(3); // 3 2 1 1 2 1 1 
    return 0;
}
