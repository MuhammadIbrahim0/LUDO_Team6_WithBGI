#pragma once
#include "Position.h"
#include "Enums.h"
class Piece
{
private:
	int Pos;
	int Radius;
	int NoofSteps;
	bool RoundCompleted = false;
	bool Iskill = false;
	bool Succeeded;
	bool IsSix;
	LUDOCOLORS Color;
public:
	Piece() {}
	Piece(int radius, int n);
	LUDOCOLORS getColor()
	{
		return Color;
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

	void draw(Position P) {
		setcolor(static_cast<int>(Color));
		circle(P.getX(), P.getY(), Radius);
		setfillstyle(SOLID_FILL, static_cast<int>(Color));
		floodfill(P.getX(), P.getY(), static_cast<int>(Color));
	}
	void unDraw(LUDOCOLORS color, Position P) {
		setcolor(static_cast<int>(color));
		circle(P.getX(), P.getY(), Radius);
		setfillstyle(SOLID_FILL, static_cast<int>(color));
		floodfill(P.getX(), P.getY(), static_cast<int>(color));
	}
	void move(Position S, Position E) {

	}
};
