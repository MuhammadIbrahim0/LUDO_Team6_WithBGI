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
	Box*Ladder;
	Piece pieces[4];
    bool hasKilled;
	Board * m_board;
	
public:
	bool NoSix(int number);
	bool hasNoInitialisedPiece();
	bool hasInitilizedPiece();
	bool hasOnlyOnePieceOnBoard();
	bool isHomePieceSelected();
	void initilizePiece();
	bool checkTurn();
	void move(Position M, Position N);
	bool isPlayerWon();
	~Player()
	{

	}
};
