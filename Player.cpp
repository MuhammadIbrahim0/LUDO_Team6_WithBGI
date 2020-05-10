#include "Player.h"
#include "board.h"
bool Player::NoSix(int number)
{
	//The function takes the result of the dice "number" when called in main and returns whether a 6 was part of the dice roll.
	//This function will then be used to authorise the realease of a said "Gotti" from the lobby of the said player 
	if (number==6)
	{ 
		return true;
	}
	else
	{
	  return false;
	}
	
}
bool Player::hasInitilizedPiece()
{
	
}
bool Player::hasNoInitialisedPiece()
{
	int isinlobby;
	int remember=0;
	for (int c=0;c<4;c++)
	{
		if (pieces[c].IsInLobby()==true)
		{
			remember++;
		}
	}
	int HaveDied=0;
	for (int c=0;c<4;c++)
	{
		if (pieces[c].IsKilled()==true)
		{
			HaveDied++;
		}
	}
	int HaveSucceeded=0;
	for (int c=0;c<4;c++)
	{
		if (pieces[c].succeeded()==true)
		{
			HaveSucceeded++;
		}
	}
	int total=HaveSucceeded+HaveDied + isinlobby;
	if (total ==4)
		return true;
	else
		return false;
}
bool Player::hasOnlyOnePieceOnBoard()
{
	int remember=0;
	for (int c=0;c<4;c++)
	{
		if (pieces[c].IsInLobby()==true)
		{
			remember++;
		}
	}
	int HaveDied=0;
	for (int c=0;c<4;c++)
	{
		if (pieces[c]->IsKilled()==true)
		{
			HaveDied++;
		}
	}
	int HaveSucceeded=0;
	for (int c=0;c<4;c++)
	{
		if (pieces[c]->succeeded()==true)
		{
			HaveSucceeded++;
		}
	}
	int total=HaveSucceeded+HaveDied+IsInLobby;
	if (total ==3)
		return true;
	else
		return false;
	

}
bool Player::isHomePieceSelected()
{
	//What does this function do?

}
void Player::initilizePiece()
{
	Position S;
	//SafetyPoint() in board returns the position of the safety point on the board for the Player
	S=m_Board.SafetyPoint();
	int remember;
	for (int c=0;c<4;c++)
	{
		if (pieces[c].IsInLobby()==true)
		{
			remember =c;
		}
	}
	//The below function moves the piece in lobby to the initialisation position
	pieces[remember].Move();
}
bool Player::checkTurn()
{
	if (pieces[0].getColor()==color)
		return true;
	else
		return false;
}
bool Player::isPlayerWon()
{
	int n=0;
	for (int m=0;m<4;m++)
	{
		if (pieces[m].succeeded==1)
		{
			n++;
		}
	}
	if (n==4)
	{
		return true;
	}
	else
		return false;
}
void Player::move(Position M,Position N)
{
	Player.Pieces.move(M,N);
}

