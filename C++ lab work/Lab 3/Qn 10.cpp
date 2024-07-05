// WAP to add two complex numbers using the concept of constructor.

#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imaginary;

public:
    Complex(float r, float i)
    {
        real = r;
        imaginary = i;
    }
    Complex add(Complex &c)
    {
        Complex result(real + c.real, imaginary + c.imaginary);
        return result;
    }

    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex c1(3.4, 4.7);
    Complex c2(1.9, 3.1);
    Complex c3 = c1.add(c2);

    cout << "Complex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();
    cout << "Sum: ";
    c3.display();
}
