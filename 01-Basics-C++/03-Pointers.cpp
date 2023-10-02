/*
Pointer:
It is an address variable that is meant for storig address of data and not the data itself

A pointer is created inside a stack

They are used for accessing the data indirectly
*/

/*
There are 3 portions of memory

1. STACK
2. HEAP
3. CODE SECTION

out program can't access heap
> so to access heap we need pointers

*/

/*
Pointers are used for
1. Accessig Heap
2. Accessing external resources
3. Parameter passing
*/

#include <iostream>
using namespace std;

#include <stdlib.h>

void pointer()
{
    int a = 10;

    // DECLARING a pointer.
    int *p;

    p = &a;

    cout << a << endl;

    // DE-REFRENCING A POINTER
    cout << *p << endl;
}

void arrayPointer()
{
    int A[5] = {2, 4, 6, 8, 10};

    int *p;

    p = A;

    // using pointer to print value
    cout << p[1];
}

// array inside HEAP
void dynamicAllocation()
{

    int *p;

    // by using we made request for memory in heap
    p = new int[2];

    p[0] = 10;
    p[1] = 15;

    // we should delete that memory
    delete [] p;

    // Whenever we are dynamically allocating memory,
    // we must release the memory when we are finished

}



int main()
{
    pointer();
    arrayPointer();
    dynamicAllocation();

    return 0;
}
