// Arrays can only be passed by address and not by value
// i.e we are passing pointer to an array

#include <iostream>
using namespace std;

// **Arrays can ONLY be passed by ADDRESS(pointer)**
void arrayAsParameter1(int A[])
{
    // **we cannot use this for each loop on an pointer**
    // for (int a : A)
    // instead we use normal for loop
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }
};

// Passing size of array as parameter

void arrayAsParameter2(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << endl;
    }
};

void arrayAsParameter3(int *A, int size)
{
    A[0] = 15;
}

// Function returning an address
// '*' is return type i.e. an address or here an array
int *arrayAsParameter4(int size)
{
    int *p;
    p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }

    //return pointer
    return p;
}

int main()
{

    int A[] = {2, 4, 6, 8, 10};
    int n = 5;

    arrayAsParameter1(A);

    arrayAsParameter3(A, n); // [15,4,6,8,10]

    int *ptr, size = 5;

    ptr = arrayAsParameter4(size);

    return 0;
}
