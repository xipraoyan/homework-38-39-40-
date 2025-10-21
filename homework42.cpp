#include <iostream>
void createMat(int **arr, int col, int row)
{
    for(int i = 0; i < col; i++)
    {
        (*arr)[i] = (int*)malloc(row * sizeof(int));
    }
}

void initMat(int **arr, int col, int row)
{
    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < row; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
}

void printMat(int **arr, int col, int row)
{
    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < row; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void deleteMat(int **arr, int col)
{
    for(int i = 0; i < col; i++)
    {
        free(arr[i]);
    }
    free (arr);
}

int main(int argc, char* argv[])
{
   int x = parsechartoint(argv[1]);  
   int y = parsechartoint(argv[2]);

   int col = x;
   int row = y;
   *arr = (int**)malloc(col * sizeof(int*));

   
    createMat(arr,col,row);
    initMat(arr,col,row);
    printMat(arr,col,row);
    deleteMat(arr,col);
   return 0;
}