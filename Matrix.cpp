#include "Matrix.h"
#include <iostream>

    Matrix::Matrix(int a, int b)
    {
        m_col = a;
        m_row = b;
        
        m_arr = new int* [m_col];
        for(int i = 1; i <= m_col; i++)
        {
           m_arr[i] = new int[m_row];
           for(int j = 0; j < m_row; j++)
           {
              m_arr[i][j] = 0;
           }
        } 
    }

    Matrix::Matrix(const Matrix& other)
    {
        m_row = other.m_row;
        m_col = other.m_col;

        m_arr = new int* [m_col];
        for(int i = 0; i < m_col; i++)
        {
           m_arr[i] = new int[m_row];
           for(int j = 0; j < m_row; j++)
           {
             m_arr[i][j] = other.m_arr[i][j];
           }
        }
    }

    Matrix& Matrix::operator = (const Matrix& other) 
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

    Matrix::~Matrix()  
    {
        for (int i = 0; i < m_col; ++i) 
        {
            delete [] m_arr[i];
        }
        delete [] m_arr;
    }

    void Matrix::print()
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