#include <iostream>
#include <array>
#include <algorithm>
const int MAX = 10;
std::array<int, MAX> list = {1, 8, 4, 6, 0, 3, 5, 2, 7, 9};
void display()
{
   std::cout << "[";
   for (int i = 0; i < MAX; i++)
   {
      std::cout << list[i] << " ";
   }
   std::cout << "]\n";
}
void bubbleSort()
{
   int temp;
   bool swapped = false;

   for (int i = 0; i < MAX - 1; i++)
   {
      swapped = false;

      for (int j = 0; j < MAX - 1 - i; j++)
      {
         std::cout << "Items compared: [" << list[j] << ", " << list[j + 1] << "] ";

         if (list[j] > list[j + 1])
         {
            std::swap(list[j], list[j + 1]);
            swapped = true;
            std::cout << "=> swapped [" << list[j] << ", " << list[j + 1] << "]\n";
         }
         else
         {
            std::cout << "=> not swapped\n";
         }
      }
      if (!swapped)
      {
         break;
      }
      std::cout << "Iteration " << (i + 1) << "#: ";
      display();
   }
}
int main()
{
   std::cout << "Input Array: ";
   display();
   std::cout << "\n";
   bubbleSort();
   std::cout << "\nOutput Array: ";
   display();
   return 0;
}
