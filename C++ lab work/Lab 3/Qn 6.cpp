// WAP to find the simple interest. (Pass default argument rate in constructor).

#include <iostream>
using namespace std;
class SI
{
    float principle, rate;
    int time;

public:
    SI(float p, int t, float r = 5.0)
    {
        principle = p;
        time = t;
        rate = r;
    }
    void calcSI()
    {
        cout << "SI=" << (principle * time * rate) / 100 << endl;
    }
};
int main()
{
    SI a(5, 6);
    a.calcSI();
}
