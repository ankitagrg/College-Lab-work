/* Define a class to represent a bank account. Include the following members:
Data members: Name of the depositor. Account Number, Type of account, Balance amount in
 the account Member Function: To assign initial values. To deposit an amount. To withdraw an amount after checking the
balance. To display name and balance
Write a main program to test the program.
*/
#include <iostream>
using namespace std;

class BankAccount
{
    string depositorName;
    int accountNumber;
    string accountType;
    float balance;

public:
    BankAccount(string name, int accNum, string accType, float initialBalance)
    {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(float amount)
    {
        balance += amount;
        cout << "Deposit successful. Current balance: " << balance << endl;
    }

    void withdraw(float amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawal successful. Current balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    void display()
    {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account("John Doe", 1234567890, "Savings", 1000.0);

    cout << "Initial Account Details:" << endl;
    account.display();
    cout << endl;

    account.deposit(500.0);

    account.withdraw(200.0);

    cout << "Final Account Details:" << endl;
    account.display();

    return 0;
}