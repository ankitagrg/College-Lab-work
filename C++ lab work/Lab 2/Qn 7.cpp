/*The default rate for simple interest for Fixed Deposit by Nepal Rastra Bank is 10 percent per annum.
However, the commercial banks change their rate of interest depending upon the time period and principal amount.
 Now, write a C++ program using OOP concept, to receive principal amount and time and rate from user.
 Keeping default argumented rate, calculate the simple interest for n customers.
*/
#include <iostream>
using namespace std;

class FixedDeposit
{
    float principal, rate;
    int time;

public:
    FixedDeposit(float p = 0, int t = 0, float r = 10)
    {
        principal = p;
        time = t;
        rate = r;
    }

    double calculateSimpleInterest()
    {
        float interest = (principal * rate * time) / 100;
        return interest;
    }
};

int main()
{
    int n;
    cout << "Enter the number of customers: ";
    cin >> n;

    float principal, rate;
    int time;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter principal amount for Customer " << i << ": ";
        cin >> principal;
        cout << "Enter time period (in years) for Customer " << i << ": ";
        cin >> time;
        cout << "Enter rate of interest (in percent) for Customer " << i << ": ";
        cin >> rate;

        FixedDeposit fd(principal, time, rate);
        float interest = fd.calculateSimpleInterest();

        cout << "Interest for Customer " << i << ": " << interest << endl;
        cout << endl;
    }

    return 0;
}
