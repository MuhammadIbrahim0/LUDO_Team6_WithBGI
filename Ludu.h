#pragma once
#include <vector>
#include "Enums.h"
#include "board.h"
#include "Dice.h"
#include "Player.h"
#include "ScoreBoard.h"
#include "Position.h"

#include <iostream>
using std::cout;
using std::endl;
using std::vector;
class Ludu
{
	LUDOCOLORS m_turn;
	Board m_board;
	Dice m_dice;
	ScoreBoard m_scoreboard;
	Player* m_players;
	Position m_selected_postion;
	vector<Player*>m_playings;
	short m_number_of_players;
	short m_number_of_teams;
	vector<short>m_scores;
private:
	void getScore();
	bool noSix();
	void removeScore(int score);
	bool isValidPieceSelected();
	void selectTheOnlyPiece();

public:
	Ludu() {
		cout << "ludu Contructed" << endl;
	}
	void play() {
		cout << "Playing Ludo";
	}

	~Ludu() {
		cout << "ludu Destructed" << endl;
	}

};

