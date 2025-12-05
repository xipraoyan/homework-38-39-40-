#include "Matrix.h"
#include <iostream>

ChessBoard::ChessBoard() : Matrix(8, 8)
{
    void initBoard();
} 

ChessBoard::ChessBoard(ChessBoard&& tmp) noexcept : Matrix(std::move(tmp))
{

}

ChessBoard& ChessBoard::operator=(ChessBoard&& tmp) noexcept
{
  if(this != &tmp)
  {
    this -> m_col = std::move(tmp.m_col);
    this -> m_row = std::move(tmp.m_row);
    this -> m_arr = std::move(tmp.m_arr);

    tmp.m_arr = nullptr;
    tmp.m_row = 0;
    tmp.m_col = 0;
  }
  return *this;
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

ChessBoard::~ChessBoard()
{
  
}