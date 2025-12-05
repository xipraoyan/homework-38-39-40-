#include "Matrix.h"
    
template <typename T>
Matrix<T>::Matrix(int a, int b)
{
    std::cout << __func__ << std::endl;
    m_col = a;
    m_row = b;
        
    m_arr = new T* [m_col];
    for(int i = 1; i <= m_col; i++)
    {
      m_arr[i] = new T[m_row];
      for(int j = 0; j < m_row; j++)
      {
        m_arr[i][j] = 0;
      }
    } 
}

template <typename T>
Matrix<T>::Matrix(const Matrix<T>& other)
{
    std::cout << __func__ << std::endl;
    m_row = other.m_row;
    m_col = other.m_col;

    m_arr = new T* [m_col];
    for(int i = 0; i < m_col; i++)
    {
      m_arr[i] = new T[m_row];
      for(int j = 0; j < m_row; j++)
      {
        m_arr[i][j] = other.m_arr[i][j];
      }
    }
}

template <typename T>
Matrix<T>& Matrix<T>::operator  = (const Matrix<T>& other) 
{
    std::cout << __func__ << std::endl;
    if(this != &other)
    {
      for (int i = 0; i < m_col; ++i) 
      {
        delete [] m_arr[i];
      }
      delete [] m_arr;

      this -> m_row = other.m_row;
      this -> m_col = other.m_col;

      this -> m_arr = new T* [m_col];
      for(int i = 0; i < m_col; i++)
      {
        m_arr[i] = new T[m_row];
        for(int j = 0; j < m_row; j++)
        {
          m_arr[i][j] = other.m_arr[i][j];
        }
      }
    }
    return *this;
}

template <typename T>
Matrix<T>::~Matrix()  
{
    std::cout << __func__ << std::endl;
    for (int i = 0; i < m_col; ++i) 
    {
      delete [] m_arr[i];
    }
    delete [] m_arr;
}

template <typename T>
void Matrix<T>::print()
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