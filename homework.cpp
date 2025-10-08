#include <iostream>
void createMat(int **arr, int col, int row)
{
    for(int i = 0; i < col; i++)
    { 
        arr[i] = new int[row];
    }
}

void initMat(int **arr, int col, int row)
{
    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < row; j++)
        {
            arr[i][j] + rand() % 10;
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
        delete [] arr[i];
    }
    delete [] arr;
}

int main()
{
    int col, row;
    std::cin >> col >> row;

    int **arr = new int*[col];

    createMat(arr, col, row);
    initMat(arr, col, row);
    printMat(arr, col, row);
    deleteMat(arr, col);

    return 0;
}