/* Create a class called time with private data items hours, minutes and seconds.
 Write inside the class an input function that accepts inputs from the user.
 Write another outside the class definition that takes as arguments two objects of class time and
 returns another time object that holds the sum of the two time variables passed as arguments.*/

#include <iostream>
using namespace std;
class time
{
    int h, m, s;

public:
    void getvalue()
    {
        cout << "Enter the time in hour & minute and second";
        cin >> h >> m >> s;
    }
    friend void sum(time t1, time t2);
}
};
void sum (time t1, time t2)
{
    time t3;
    t3.s = t1.s + t2.s;
    t3.m = (t1.m + t2.m + t3.s / 60);
    t3.s = (t1.s + t2.s) % 60;
    t3.h = t1.h + t2.h + t3.m / 60;
    t3.m = t3.m % 60;
    cout << "HOUR=" << t3.h << endl
         << "MINUTES=" << t3.m << endl
         << "SECOND=" << t3.s << endl;
};
int main()
{
    time a, b;
    a.getvalue();
    b.getvalue();
    sum(a,b);
}
