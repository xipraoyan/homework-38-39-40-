#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix
{
public:
    int m_col;
    int m_row;
    int** m_arr;

public:
    Matrix();
    Matrix(int a, int b);

    Matrix (const Matrix& other);

    Matrix& operator = (const Matrix& other);

    virtual void print();

    virtual ~Matrix();

};

class ChessBoard : public Matrix
{
public:
  ChessBoard();
  void initBoard();
  void print() override;

};

#endif                 