// Array

#include <iostream>
using namespace std;

// Initialise Array
void initArray()
{
    // declare Array
    int A[5];

    // An integer takes 4 bytes
    // So the size of A will be 4 x 5 = 20

    cout << sizeof(A) << endl; // 20

    // prefill values
    int B[5] = {1, 2, 3, 4, 5};
    int C[] = {1, 2, 3};

    // Accessing non existent values and indexes will return 0
}

// Taking input from user
void createArray()
{
    int n;
    cout << "Enter size of your array: ";
    cin >> n;
    int A[n];
}

int main()
{
    initArray();
    createArray();

    return 0;
}
