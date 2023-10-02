#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void createRectangleInHeap()
{
    Rectangle *p;      // created in stack
    p = new Rectangle; // DYNAMIC ALLOCATION: create rectangle structre in heap

    p->length = 15;
    p->breadth = 7;

    cout << p->length;
    cout << p->breadth;
}

int main()
{

    // Rectangle r{10,5} => another way to decalre without struct

    struct Rectangle r
    {
        10, 5
    };

    cout << r.length << endl
         << r.breadth << endl;

    // now to access variable in poiter use arrow ->
    Rectangle *p = &r;
    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;
}
