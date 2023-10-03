// Structures
// Structure is a group of related data members

#include <iostream>
using namespace std;

// create a STRUCTURE with struct
// structure doesnt consume memory as long as you initilaise it
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{

    // creating a single rectangle
    struct Rectangle r1 = {10, 5};
    // creating multiple rectangles
    struct Rectangle r2={2,3}, r3={4,8}, r4={8,10};

    cout << sizeof(r1) << endl; // 8 === int takes 4 bytes x 2 ints
    
    // ACCESSING values
    cout << r1.length << endl;
    cout << r1.breadth << endl;

    // ALTERING values
    r1.length = 15;
    r1.breadth = 10;

    return 0;
}
