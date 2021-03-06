#pragma once
#include"box.h"
#include "Position.h"
class Board
{
	int m_number_of_boxes;
	int n_number_of_ladders;
	Box* m_boxes;
	int* ladder;
	char* m_char_boxes;
private:
	void putstops();	//initial all the stops by putting * in char array
	void putspawn();	//put player number(1,2,3..etc) in their respective spawn location
	void isstop();
	void isstop(int pos);		//checks wheather a stop/spawn is present in the ending location
public:
	void print();
	void removeFromTheBoard(const Position &pos);
	void removeFromTheBoard(int pos);//----------
	void askToUndraw(const Position& pos);
	void askToUndraw(int pos);//----------
	void askToDraw(int pos);
	void highlightSelection();
	void highlightSelection(int pos);//----------
	bool hasKilled();
	void move(const Position& selectedPosition, int selectedScores);
	void move(int selectedPosition, int selectedScores);//----------
};
