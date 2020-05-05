#pragma once
#include "Position.h"
class Piece
{
private: 



	//Position P;
	int NoofSteps;
	bool RoundCompleted = false;
	bool Iskill = false;
	bool succeeded;
	bool IsSix;
public:
	void draw();
	void move();
	bool Mypiece();
};
