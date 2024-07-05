// WAP that copies data member of one object to another with the help of a copy constructor.

#include <iostream>
using namespace std;
class Hero
{
    int data;

public:
    Hero(int d)
    {
        data = d;
    }
    Hero(Hero &other)
    {
        data = other.data;
    }
    void display()
    {
        cout << "THE NUMBER IS = " << data << endl;
    }
};
int main()
{
    Hero a(5);
    Hero b(a);
    a.display();
    b.display();
}