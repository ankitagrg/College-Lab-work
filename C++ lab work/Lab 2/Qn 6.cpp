/* Write a program to create two classes: PrithviHighway and MahendraHighway both having with two private data members km and mr.
 Each class have individual function members to take the length of highways in kilometer and meter.
 There is a friend function showroral) to add the length of both highways.
 This friend function should be an inline function. Write a C++ program.
*/

#include <iostream>
using namespace std;
class PrithiviHighway;
class MahendraHighway
{
    int km, mtr;

public:
    void getvalue()
    {
        cout << "ENTER THE LENGTH IN KTM AND METER OF MH" << endl;
        cin >> km >> mtr;
    }
    friend class PrithiviHighway;
};
class PrithiviHighway
{
    int km, mtr;

public:
    void getvalue()
    {
        cout << "ENTER THE LENGTH IN KTM AND METER OF PH" << endl;
        cin >> km >> mtr;
    }
    inline void showtotal(MahendraHighway &oop);
};
inline void PrithiviHighway::showtotal(MahendraHighway &oop)
{
    int totalKm = km + oop.km;
    int totalMtr = mtr + oop.mtr;

    totalKm += totalMtr / 1000;
    totalMtr %= 1000;

    cout << "Total length of both highways: " << totalKm << " km " << totalMtr << " m" << endl;
}
int main()
{
    MahendraHighway objMH;
    objMH.getvalue();
    PrithiviHighway objPH;
    objPH.getvalue();
    objPH.showtotal(objMH);
    return 0;
}