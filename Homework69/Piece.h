#ifndef PIECE_H
#define PIECE_H

#include <iostream>

class Piece 
{
public:
   virtual void move() = 0;
};

class Pawn : public Piece
{
public:
   void move() override;
};

class Rook : public Piece
{
public:
   void move() override;
};

class King : public Piece
{
public:
   void move() override;
};

class Knight : public Piece
{
public:
   void move() override;
};

class Bishop : public Piece
{
public:
   void move() override;
};

class Queen : public Piece
{
public:
   void move() override;
};

class king : public Piece
{
public:
   void move() override;
};

#endif