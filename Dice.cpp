#include "Dice.h"


int Dice::diceRoll() 
{
	srand(time(0));
	int dNum = rand() % 6;
	dNum = dNum + 1;
	return dNum;
}
