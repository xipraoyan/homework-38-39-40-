#include <iostream>

class Matrix
{
    public:
       int col;
       int row;
       int** arr;
    
    
    void init()
   {
        for(int i = 0; i < col; i++)
        {
            for(int j = 0; j < row; j++)
            {
               arr[i][j] = rand() % 10;
            }
    }    
    
      void print()
    {
        std::cout << "col = " << col << std::endl  ;
        std::cout << "row = " << row << std::endl;

        for(int i = 0; i < col; i++)
        {
            for(int j = 0; j < row; j++)
            {
               std::cout << arr[i][j] << " ";
            }
           std::cout << std::endl;
        }
    }
       
   }
}；

int main(int argc, char* argv[])
{
   Matrix Matrix1;
   Matrix1.col = 3;
   Matrix1.row = 3;

   Matrix1.print();
   Matrix1.init();

   return 0;
}