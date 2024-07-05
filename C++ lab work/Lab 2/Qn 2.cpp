/*There are two classes GCES and PEC. Each has a private data member (ie.no of students).
 Create a function in each class to take the value of number of students.
  Make a friend function to compare who has maximum no. of students???
gns
Create a class called time with private data items hours, minutes and seconds.
Write inside the class an input function that accepts inputs from the user. Write another outside the class definition that takes as arguments two objects of class time and returns another time object that holds the sum of the two time variables passed as arguments.
 */

#include<iostream>
using namespace std;
class PEC;
class GCES
{
    int num;

public:
    void getvalue()
    {
        cout << "ENTER THE NO OF STUDENTS IN GCES" << endl;
        cin >> num;
    }
    friend void display(GCES gces, PEC pec);
};
class PEC
{
    int num;

public:
    void getvalue()
    {
        cout << "ENTER THE NO OF STUDENTS IN PEC" << endl;
        cin >> num;
    }
    friend void display(GCES gces, PEC pec);
};
void display(GCES gces, PEC pec)
{
    if (gces.num > pec.num)
    {
        cout << "GCES HAS MORE STUDENTS" << endl;
    }
    else if (gces.num < pec.num)
    {
        cout << "PEC HAS MORE STUDENTS" << endl;
    }
    else
    {
        cout << "EQUAL";
    }
};
int main()
{
    GCES e;
    e.getvalue();
    PEC p;
    p.getvalue();
    display(e, p);
}