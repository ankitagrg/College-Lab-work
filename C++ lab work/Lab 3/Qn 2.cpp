/*Create a class named 'Rectangle' with two data members-length and breadth and a function to calculate
the area which is 'length breadth. The class has three constructors which are:
a- having no parameter values of both length and breadth are assigned zero, b- having two numbers as parameters - the two numbers are assigned as length and breadth
c-having one number as parameter - both length and breadth are assigned that number.
respectively.
Now, create objects of the 'Rectangle' class having none, one and two parameters and print their
areas */

#include <iostream>
using namespace std;
class Rectangle
{
    int length, breadth;

public:
    Rectangle()
    {
        length = 4;
        breadth = 7;
    }

    Rectangle(int len, int bre)
    {
        length = len;
        breadth = bre;
    }

    Rectangle(int num)
    {
        length = num;
        breadth = num;
    }
    void calculateArea()
    {
        cout << "Area=" << length * breadth << endl;
    }
};
int main()
{
    Rectangle a1;
    Rectangle a2(5, 6);
    Rectangle a3(4);
    a1.calculateArea();
    a2.calculateArea();
    a3.calculateArea();
}