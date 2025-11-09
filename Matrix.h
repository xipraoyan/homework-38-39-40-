#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix
{
    private:
      int m_col;
      int m_row;
      int** m_arr;

    public:
      Matrix();

      Matrix (const Matrix& other);

      Matrix& operator = (const Matrix& other);

      ~Matrix();

};

#endif