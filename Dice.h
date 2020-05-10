#pragma once
#include<time.h>
#include<iostream>

using namespace std;

class Dice
{
	int m_score;
public:
	Dice() {};
	//bool isclicked(const position& position);
	int diceRoll();
	void print()	// prints dice symbol;
	{}
	~Dice() {};
};

