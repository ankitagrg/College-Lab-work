// Create a class to print the area of a square and a rectangle.
// The class has two functions with the same name but different number of parameters.
// The function for printing the area of rectangle has two parameters which are its length and breadth respectively
//  while the other function for printing the area of square has one parameter which is the side of the square

#include <iostream>
using namespace std;
class Area
{
    int length, breadth;

public:
    Area(int a)
    {
        length = a;
        cout << "AREA OF SQUARE=" << length * length << endl;
        ;
    }
    Area(int a, int b)
    {
        length = a;
        breadth = b;
        cout << "AREA OF RECT=" << length * breadth << endl;
        ;
    }
};
int main()
{
    Area c(4, 5);
    Area d(4);
}
