#include <iostream>

int main(int argc, char* argv[])
{
   int x;
   std::cin >> x;

   int size = x;
   int* arr = new int[size];

   for(int i = 0; i < size; i++)
   {
    arr[i] = rand() % 10;
   }

   for(int i = 0; i < size; i++)
   {
      std::cout << arr[i] << " " << std::endl;
   }
   delete [] arr;
   return 0;
}