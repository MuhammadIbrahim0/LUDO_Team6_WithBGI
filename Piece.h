#pragma once
#include "Position.h"
#include "Enums.h"
class Piece
{
private:
	Position P;
	int Radius;
	int NoofSteps;
	bool RoundCompleted = false;
	bool Iskill = false;
	bool Succeeded;
	bool IsSix;
	LUDOCOLORS m_color;
public:
	Piece() {}
	LUDOCOLORS getColor()
	{
		return m_color;
	}
	bool isInLobby()
	{
		return true;
	}
	bool isSucceeded()
	{
		return true;
	}
	bool isKilled()
	{
		return true;
	}

	void draw() {

	}
	void unDraw(LUDOCOLORS color) {

	}
	void move(Position S, Position E) {

	}
};
