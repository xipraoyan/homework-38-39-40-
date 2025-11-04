#include <iostream>

class Matrix
{
    private:
    int m_col;
    int m_row;
    int** m_arr;

    public:
    Matrix(int a, int b)
    {
       m_col = a;
       m_row = b;
       m_arr = new int* [m_col];
       for(int i = 0; i < m_col; i++)
        {
           m_arr[i] = new int[m_row];
        }
    }

    Matrix(const Matrix& other)
    {
        m_row = other.m_row;
        m_col = other.m_col;
        
        for(int i = 0; i < m_col; i++)
        {
          for(int j = 0; j < m_row; j++)
          {
            std::cout << m_arr[i][j] << " ";
          }
          std::cout << std::endl;
        }
    }
};

int main(int argc, char* argv[])
{
    Matrix a(3, 3);

    Matrix b(a);
    
    return 0;

}