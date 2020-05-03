#pragma once
#include"box.h"
#include "Position.h"
class Board
{
	int m_number_of_boxes;
	int n_number_of_ladders;
	Box* m_boxes;
	int* ladder;
public:
	void putstops();//initial all the stops by putting * in char array
	void putspawn();//put player number(1,2,3..etc) in their respective spawn location
	void isstop();//checks wheather a stop/spawn is present in the ending location
	void removeFromTheBoard(const Position &pos);
	void askToUndraw(const Position& pos);

};
