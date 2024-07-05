/*WAP that has a class Compare with nl and n2 as private data members, gervalue() as public member to
5/????
accept two numbers from user. Make a friend function compare() to compare those two numbers and display the greatest among them.
ea???
 */

#include <iostream>
using namespace std;
class Compare
{
    int n1, n2;

public:
    void getvalue()
    {
        cout << "ENTER 2 NUMBERS" << endl;
        cin >> n1 >> n2;
    }
    friend void compare(Compare obj);
};
void compare(Compare obj)
{
    if (obj.n1 > obj.n2)
    {
        cout << obj.n1 << "is greater" << endl;
    }
    else if (obj.n2 > obj.n1)
    {
        cout << obj.n2 << "is greater" << endl;
    }
    else
    {
        cout << "are equal" << endl;
    }
};
int main()
{
    Compare hi;
    hi.getvalue();
    compare(hi);
}