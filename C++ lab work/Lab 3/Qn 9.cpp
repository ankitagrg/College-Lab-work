// 7. WAP to calculate the sum of integer numbers using constructor overloading.
#include <iostream>
using namespace std;
class SumCalculator
{

    int sum;

public:
    SumCalculator()
    {
        sum = 0;
    }
    SumCalculator(int num)
    {
        sum = num;
    }
    SumCalculator(int num1, int num2)
    {
        sum = num1 + num2;
    }

    void displaySum()
    {
        cout << "Sum: " << sum << endl;
    }
};

int main()
{
    SumCalculator sum1;
    SumCalculator sum2(5);
    SumCalculator sum3(2, 6);
    sum1.displaySum();
    sum2.displaySum();
    sum3.displaySum();
}