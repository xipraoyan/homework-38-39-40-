#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

template <typename T>
class Matrix
{
public:
    int m_col;
    int m_row;
    T** m_arr;

public:
    Matrix();
    Matrix(int a, int b);

    Matrix (const Matrix<T>& other);

    Matrix<T>& operator = (const Matrix<T>& other);

    void print();

    ~Matrix();
};

#endif