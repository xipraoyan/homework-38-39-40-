#include "Piece.h"

int main(int argc, char* argv[])
{ 
   Piece* P = new Pawn;
   Piece* Kn = new Knight;
   Piece* K = new King;
   Piece* B = new Bishop;
   Piece* Q = new Queen;
   Piece* R = new Rook;

   P -> move();
   Kn -> move();
   K -> move();
   B -> move();
   Q -> move();
   R -> move();

   return 0;
}