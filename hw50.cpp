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
            for(int j = 0; j < m_row; j++)
            {
               m_arr[i][j] = rand() % 10;
               std::cout << m_arr[i][j] << " ";
            }
            std::cout << std::endl;
        } 
    
    }

    void turnMatrix()
    {
        int k;
        for(int i = 0; i < m_col; i++)
        {
            for(int j = 0; j < m_row / 2; j++)
            {
              k = m_arr[i][j];
              m_arr[i][j] = m_arr[i][m_row - j - 1];
              m_arr[i][m_row - j - 1] = k;
            }
        }

        for(int i = 0; i < m_col - 1; i++)
        {
            for(int j = 0; j < (m_row - 1 - i); j++)
            {
              k = m_arr[i][j];
              m_arr[i][j] = m_arr[m_col - j - 1][m_row - i - 1];
              m_arr[m_col - j - 1][m_row - i - 1] = k;
            }
        }
    }

    void print()
    {

        for (int i = 0; i < m_col; i++)
        {
            for (int j = 0; j < m_row; j++)
            {
               std::cout << m_arr[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    ~Matrix()
    {
        for (int i = 0; i < m_col; i++)
        {
            delete[] m_arr[i];
        }
        delete[] m_arr;
    }
};

int main(int argc, char* argv[])
{
    Matrix a(4, 4);
    std::cout << std::endl;
    a.Method();
    a.print();

    return 0;
}
