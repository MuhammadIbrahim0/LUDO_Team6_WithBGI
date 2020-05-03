#pragma once
#include "Piece.h"
class Box
{
	Piece* m_piece;
	char symbol;//we contain symbol of spawns and stops here
	int no_of_pieces;//how many pieces are there in one box
public:
	void drawBox();//print  boxes and call piece draw
	Piece * getpiece(LUDOCOLORS C);// returns the pointer of the piece
	void placePiece();// put the piece in(m_piece)
	bool hasAnyPiece();// tells wheather a piece is present there
	bool hasPiece(LUDOCOLORS C);//
	void unDraw();
	void removePiece(Piece* C);
	int howManyOfThisColor(LUDOCOLORS C);
};
