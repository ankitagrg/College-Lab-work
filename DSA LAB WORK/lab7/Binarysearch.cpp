#include <iostream>
using namespace std;
int binarySearch(int a[], int beg, int end, int val)
{
    int mid;
    if (end >= beg)
    {
        mid = (beg + end) / 2;
        if (a[mid] == val)
        {
            return mid + 1;
        }
        else if (a[mid] < val)
        {
            return binarySearch(a, mid + 1, end, val);
        }
        else
        {
            return binarySearch(a, beg, mid - 1, val);
        }
    }
    return -1;
}
int main()
{
    int a[] = {10, 12, 24, 29, 39, 40, 51, 56, 70}; // Given array //
    int val = 51;                                   // Value to be searched
    int n = sizeof(a) / sizeof(a[0]);               // Size of array //
    int res = binarySearch(a, 0, n - 1, val);       // Store result //
    cout << "The elements of the array are - ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\nElement to be searched is - " << val;
    if (res == -1)
        cout << "\nElement is not present in the array";
    else
        cout << "\nElement is present at " << res << " position of array";
    return 0;
}