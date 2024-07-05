/*Create two classes DM and DB which store the value of distance.
 DM store distances in meters and centimeters and DB in feet and inches.
 Write a program that can read values for the class objects and add one object of DM with another object of DB. */
#include <iostream>
using namespace std;
class DB;
class DM
{
    int m, c;

public:
    void getvalue()
    {
        cout << "ENTER THE DISTANCE IN METER AND CENTIMETERS" << endl;
        cin >> m >> c;
    }
    friend class DB;
};
class DB
{
    int f, i;

public:
    void getvalue()
    {
        cout << "ENTER THE DISTANCE IN FEET AND INCHES" << endl;
        cin >> f >> i;
    }
    void sum(DM s)
    {
        float d, e, g;

        d = s.c + i * 2.54;    // cm
        e = (s.m + f * 0.304); // m
        cout << "METER=" << e << endl
             << "CENTIMETER=" << d << endl;
    }
};
int main()
{
    DB a;
    a.getvalue();
    DM s;
    s.getvalue();
    a.sum(s);
}
