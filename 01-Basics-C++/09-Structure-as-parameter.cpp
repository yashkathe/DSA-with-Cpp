#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// STRUCTURE as Paramater
// Call by value
void structAsParameter1(struct Rectangle r)
{
    cout << r.length << " " << r.breadth << endl;
};

// Call by address
void structAsParameter2(struct Rectangle *p)
{
    p->length = 20;
    cout << p->length << " " << p->breadth << endl;
};

// Return pointer of type rectangle
struct Rectangle *returnPointerTypeRectangle()
{

    struct Rectangle *p;
    p = new Rectangle;

    p->length = 150;
    p->breadth = 100;

    // return the address
    return p;
}

int main()
{
    struct Rectangle r1 = {10, 5};

    structAsParameter1(r1);  // 10 5
    structAsParameter2(&r1); // 20 5

    struct Rectangle *ptr = returnPointerTypeRectangle();
    cout << ptr->length << " " << ptr->breadth;

    return 0;
}
