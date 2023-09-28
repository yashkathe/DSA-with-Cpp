// Check Palindrome Number

#include <iostream>
using namespace std;

bool isPalindrome(string input)
{
    if (input.length() == 0 || input.length() == 1)
    {
        return true;
    }

    if (input[0] == input[input.length() - 1])
    {
        return isPalindrome(input.substr(1, input.length() - 2));
    }

    return false;
}

int main()
{
    bool ans = isPalindrome("hello");
    bool ans2 = isPalindrome("racecar");

    cout << boolalpha << ans << endl;
    cout << boolalpha << ans2 << endl;

    return 0;
}

