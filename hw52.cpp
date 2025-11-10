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

  Matrix(const Matrix& other)
  {
    m_col = other.m_col;
    m_row = other.m_row;

    m_arr = new int* [m_col];
    for(int i = 0; i < m_col; i++)
    {
      m_arr[i] = new int[m_row];
      for(int j = 0; j < m_row; j++)
      {
        m_arr[i][j] = other.m_arr[i][j];
      }
      // std::cout << std::endl;
    }
  }

  Matrix& operator = (const Matrix& other)
  {
    
    if(this != &other)
    {
      this -> m_row = other.m_row;
      this -> m_col = other.m_col;

      this -> m_arr = new int* [m_col];
      for(int i = 0; i < m_col; i++)
      {
        m_arr[i] = new int[m_row];
        for(int j = 0; j < m_row; j++)
        {
          m_arr[i][j] = other.m_arr[i][j];
       }
      }  
    }
    return *this;
  }

  Matrix& operator ++ ()
  {
    for(int i = 0; i < m_col; i++)
    {
      for(int j = 0; j < m_row; j++)
      {
        ++this -> m_arr[i][j];
      }
    }
    return *this;
  }

  Matrix operator ++ (int)
  {
    Matrix temp (*this);
    
    for(int i = 0; i < m_col; i++)
    {
      for(int j = 0; j < m_row; j++)
      {
        ++this -> m_arr[i][j];
      }
    }
    return temp;
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

  Matrix b(a);
  b = ++a;
  b.print();
  std::cout << std::endl;

  Matrix c(a);
  c = a++;
  c.print();
  
  std::cout << std::endl;
  a.print();

  return 0;
}
