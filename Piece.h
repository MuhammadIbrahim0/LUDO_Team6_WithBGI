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
	void draw();
	void move();
	bool Mypiece();
};
