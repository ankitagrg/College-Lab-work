/* Create a class called Mountain with data members name, height, location and a constructor that initializes
the members to the values passed to it as parameters,
 a function called CmpHeight() to compare two objects and DisplayInfo() to display the information of Mountain.
 In main, create two objects of the class mountain and print the information of the mountain which is greatest height. */

#include <iostream>
using namespace std;

class Mountain
{
private:
    string name;
    int height;
    string location;

public:
    Mountain(string n, int h, string loc)
    {
        name = n;
        height = h;
        location = loc;
    }

    int getHeight()
    {
        return height;
    }

    void DisplayInfo()
    {
        cout << "Mountain Name: " << name << endl;
        cout << "Height: " << height << " meters" << endl;
        cout << "Location: " << location << endl;
        cout << endl;
    }

    static Mountain CmpHeight(Mountain &m1, Mountain &m2)
    {
        if (m1.height > m2.height)
        {
            return m1;
        }
        else
        {
            return m2;
        }
    }
};

int main()
{
    Mountain m1("Mount Everest", 8848, "Nepal");
    Mountain m2("K2", 8611, "Pakistan");

    m1.DisplayInfo();
    m2.DisplayInfo();

    Mountain tallestMountain = Mountain::CmpHeight(m1, m2);

    cout << "Mountain with the Greatest Height: " << endl;
    tallestMountain.DisplayInfo();

    return 0;
}
