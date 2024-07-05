/* Suppose you have a Bank account with an initial amount of $50 and you have to add some more amount to it.
Create a class 'AddAmount' with a data member named 'amount' with an initial value of $50.
 Now make two constructors of this class as follows: a - without any parameter-to assign initial value
b- having a parameter which is the amount that will be added to the account
Create an object of the 'AddAmount' class and display the final amount in the account.  */

#include<iostream>
using namespace std;
class AddAmount
{
    int amount;

public:
    AddAmount()
    {
        amount = 60;
    }
    AddAmount(int addedamt)
    {
        amount += addedamt;
    }
    void dispalyAmt()
    {
        cout << "The Amount is " << amount << endl;
    }
};
int main()
{
    AddAmount a1;
    AddAmount a2(30);
    a1.dispalyAmt();
    a2.dispalyAmt();
}
