#pragma once
#include "Position.h"
#include "Enums.h"
class Piece
{
private: 



	Position P;
	int NoofSteps;
	int Radius
	bool RoundCompleted = false;
	bool Iskill = false;
	bool succeeded;
	bool IsSix;
	LUDOCOLORS m_color;
public:
	LUDOCOLORS getColor()
	{
		return m_color;
	}
	bool IsInLobby()
	{
		return true;
	}
	bool succeeded()
	{
		return true;

	}
	bool IsKilled()
	{
		return true;
	}

	void draw();
	void undraw(LUDOCOLORS color) {

	}
    	void move(Position S, Position E);
	bool Mypiece();
};
