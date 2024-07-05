/* There are two mutual friend classes PU and TU. PU has a private data member (ie. No of Phd students)
and TU has a private data member (ie. No of researchers). Also PU has a function showtotal) which
displays the total no of students in both PU and TU. Also TU has a function showdifferences() to display
the difference of students in PU and TU. Write the program with necessary assumptions.
*/

#include <iostream>
using namespace std;
class TU;
class PU
{
    int no_of_phd;

public:
    void getvalue()
    {
        cout << "ENTER THE NO OF PHD STUDENTS IN PU" << endl;
        cin >> no_of_phd;
    }

    void showTotal(TU &objTU);

    friend class TU;
};

class TU
{
    int no_of_researchers;

public:
    void getvalue()
    {
        cout << "ENTER THE NO OF RESEARCHERS IN TU" << endl;
        cin >> no_of_researchers;
    }

    void showResearchers(PU &objPU)
    {
        int difference = objPU.no_of_phd - no_of_researchers;
        cout << "Difference in student count between PU and TU: " << difference << endl;
    }

    friend class PU;
};

void PU::showTotal(TU &objTU)
{
    int totalStudents = no_of_phd + objTU.no_of_researchers;
    cout << "Total number of students in PU and TU: " << totalStudents << endl;
}

int main()
{
    PU objPU;
    objPU.getvalue();
    TU objTU;
    objTU.getvalue();
    objPU.showTotal(objTU);
    objTU.showResearchers(objPU);

    return 0;
}
