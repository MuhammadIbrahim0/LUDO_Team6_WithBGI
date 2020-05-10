#include"Teams.h"
#include"Player.h"
#include<iostream>
#include<conio.h>
using namespace std;

int Teams::requestToTransferScores(LUDOCOLORS C)
{
	cout << "You have won/lost do you want to transfer the score?";
	cout << endl;
	int choice;
	cin >> choice;
	if (this->noOfTeams > 2)
	{
		return choice;
	}
	else
	{
		cout << "Only two players are playing, hence can never be on the same team!";
	}
}
