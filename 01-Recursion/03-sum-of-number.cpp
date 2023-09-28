#include <iostream>
using namespace std;

int recursiveSummation(int inputNumber)
{
    if (inputNumber <= 1)
    {
        return inputNumber;
    }

    return recursiveSummation(inputNumber - 1) + inputNumber;
}

int main()
{

    int ans = recursiveSummation(10);
    cout << ans;

    return 0;
}
