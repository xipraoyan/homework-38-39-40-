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
        }
      } 
    }

    Matrix operator * (int n)
    {
      for(int i = 0; i < m_col; i++)
      {
        for(int j = 0; j < m_row; j++)
        {
          this -> m_arr[i][j] = this -> m_arr[i][j] * n;
        }
      }
      return *this;
    }

    void print()
    {
      for(int i = 0; i < m_col; i++)
      {
        for(int j = 0; j < m_row; j++)
        {
          std::cout << m_arr[i][j] << " ";
        }
        std::cout << std::endl;
       }
    }

    ~Matrix()
    {
      for(int i = 0; i < m_col; i++)
      {
        delete [] m_arr[i];
      }
      delete [] m_arr;
    }
};

   int main(int argc, char* argv[])
{
    Matrix a(3, 3);
    a.print();
    std::cout << std::endl;

    Matrix b = a * 5;
    b.print();


    return 0;
}
