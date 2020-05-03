#pragma once
#include "Player.h"
class Teams
{
public:
	Player* ps;
	int noOfTeams;
	void requestToTransferScores(LUDOCOLORS C);
	Teams() {
	}
	~Teams() {
	}
};
