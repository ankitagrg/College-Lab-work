/*Create a class called time that has separate int data member for hours, minutes and seconds.
One constructor should initialize this data to 0 and another should initialize it to fixed values.
A member function should display it in hh:mm:ss format. The final member function should add two objects of time passed as arguments.
Create two initialized time objects and one that isn't initialized in the main program.
Then it should add the two initialized values together leaving the result in the third time object.*/

#include <iostream>
using namespace std;
class Time
{
private:
    int hours, minutes, seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void displayTime()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    Time addTime(const Time &t)
    {
        Time result;
        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes + (result.seconds / 60);
        result.hours = hours + t.hours + (result.minutes / 60);
        result.seconds %= 60;
        result.minutes %= 60;
        return result;
    }
};
int main()
{
    Time t1(7, 10, 45);
    Time t2(6, 25, 20);
    Time t3;
    cout << "Time 1: ";
    t1.displayTime();
    cout << "Time 2: ";
    t2.displayTime();
    t3 = t1.addTime(t2);
    cout << "Time 3 (Sum of Time 1 and Time 2): ";
    t3.displayTime();
}