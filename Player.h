#pragma once
#include "Enums.h"
#include "box.h"
#include "Piece.h"
//#include "board.h"
class Board;

class Player
{
private:
	LUDOCOLORS color;
	Box	*Ladder;
	Piece pieces[4];
    bool hasKilled;
	Board * m_board;
public:
	bool NoSix();
	bool hasNoInitialisedPiece();
	bool hasInitilizedPiece();
	void CheckTurn();
	void move();
	bool isPlayerWon();
	~Player()
	{

	}
};
