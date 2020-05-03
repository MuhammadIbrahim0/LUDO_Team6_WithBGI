#pragma once
#include"box.h"
class board
{
	box* m_boxes[Nop * 13];
	int* ladder[Nop];
public:
	void putstops();//initial all the stops by putting * in char array
	void putspawn();//put player number(1,2,3..etc) in their respective spawn location
	void isstop();//checks wheather a stop/spawn is present in the ending location

};
