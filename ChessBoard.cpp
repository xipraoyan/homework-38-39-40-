#include "Matrix.h"
#include <iostream>

ChessBoard::ChessBoard() : Matrix(8, 8)
{
    void initBoard();
} 

void ChessBoard::initBoard()
{
    m_arr = new int* [m_col];
    for(int i = 1; i <= m_col; i++)
    {
      m_arr[i] = new int[m_row];
      for(int j = 0; j < m_row; j++)
      {
        m_arr[i][j] = ((i + j) % 2); 
      }
    } 
}

void ChessBoard::print()
{
    Matrix::print();
}


