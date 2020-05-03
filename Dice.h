#pragma once
class Dice
{
	int m_score;
public:
	Dice() {

	}
	bool isclicked(const Position& position); 
	int diceRoll();  // returns random value <= 6 
	void print();	// prints dice symbol;
	~Dice() {

	}
};
