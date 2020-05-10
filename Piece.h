#pragma once
#include "Position.h"
#include "Enums.h"
class Piece
{
private: 



	//Position P;
	int NoofSteps;
	bool RoundCompleted = false;
	bool Iskill = false;
	bool succeeded;
	bool IsSix;
	LUDOCOLORS m_color;
	friend class Box;
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
    void move(Position S, Position E);
	bool Mypiece();
};
