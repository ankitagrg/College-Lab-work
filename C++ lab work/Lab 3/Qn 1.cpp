/*Write a program to print the names of students by creating a Student class.
If no name is passed while creating an object of the Student class,
then the name should be "Unknown", otherwise the name should
be equal to the String value passed while creating the object of the Student class. */

#include <iostream>
#include <string>>
using namespace std;
class Student
{
    string name;

public:
    Student(string name1 = "Unknown")
    {
        name = name1;
    }
    void printName()
    {
        cout << "NAME OF STUDENT=" << name << endl;
    }
};
int main()
{
    Student a;
    Student b("HARI");
    Student c("RAM");
    a.printName();
    b.printName();
    c.printName();
}
