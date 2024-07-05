#include <iostream>
using namespace std;
int main()
{
    int i, j, num, a, temp, min., arr[10];
    cout << "Enter the number of elements:";
    cin >> num;
    cout << "\n Enter the elements \n";
    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < num - 1; i++)
    {
        min = arr[i];
        P = i;
        for (j = i + 1; j < num; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                a = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[a];
        arr[a] = temp;
    }
    cout << "\n Sorted Elements:\n";
    for (i = 0; i < num; i++)
    {
        cout << arr[i] << "";
    }
    return 0;
}