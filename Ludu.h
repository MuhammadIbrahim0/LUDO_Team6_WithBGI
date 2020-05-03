#pragma once
#include <vector>
#include "Enums.h"
#include "board.h"
#include "Dice.h"
#include "Player.h"
#include "ScoreBoard.h"
#include "Position.h"
#include "Teams.h"

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
	Position m_selected_position;
	vector<Player*>m_playings;
	Teams* m_teams;
	short m_number_of_players;
	short m_number_of_teams;
	vector<short>m_scores;
	bool m_is_playing_in_team;
	short m_selected_score;
private:
	void getScores();
	void selectPiece();
	bool noSix();
	void removeScore(int score);
	void removeFromPlayingList();
	bool isValidPieceSelected();
	void selectTheOnlyPiece();
	bool isGameOver() {
		return false;
	}
public:
	Ludu() {
		cout << "ludu Contructed" << endl;
	}
	void play(){
	m_board.print();                                            //Print the Board on the screen
	m_dice.print();                                                //Print the Dice on the screen
	while (!isGameOver()) {
		LUDOCOLORS m_previous_turn = m_turn;                        //This will save the turn when the player has won in team
		bool m_has_killed_opponent = false;
		bool m_has_initialized_new_piece = false;
		getScores();                                            //Ask the Player to move the dice( score= dice)
		m_scoreboard.displayScores(m_scores);                            //Print the scores of Player
		if (!m_players[static_cast<int>(m_turn)].hasInitilizedPiece() && noSix())
		{
			do {
				if (m_players[static_cast<int>(m_turn)].isPlayerWon() && m_is_playing_in_team)
				{
					m_previous_turn = m_turn;
					m_teams.requestToTransferScores(m_turn);                    // Request to whom the player want to give score after winning
				}

				if (!m_players[m_turn].hasOnlyOnePieceOnBoard() && noSix()) {
					do {
						selectPiece();                                 //Ask Player To Select Piece
						if (m_ps[m_turn].isHomePieceSelected() && !noSix())        //Check that Player want to have new Piece on the Board
						{
							m_has_initialized_new_piece = true;
							m_ps[m_turn].initilizePiece();                    //Initilaize the Piece on the Board
							removeScore(6);                        //Romove the 6 from the Score Array
							m_scoreboard.displayScores(m_scores);            //Print New Scores
							break;
						}
					} while (!isValidPieceSelected());                         // Check Piece Validity
					if (!m_has_initialized_new_piece)
					{
						m_board.highlightSelection();                     //Highlight the Selection Position
						m_scoreboard.selectScore(m_selected_score);         //Select the Score to Move
						removeScore(m_selected_score);                    //Remove the Score from the array of Scores
						m_scoreboard.displayScores(m_scores[]);                //Print the Remaing Scores Available
					}
				}
				else {
					selectTheOnlyPiece();                             //Automatically Selection the Piece That is Present
				}
				if (!m_has_initialized_new_piece)
				{
					m_board.move(m_selected_position, m_selected_score);				//Move the Piece on the Board, Change the Position of Piece
				}
				if (m_players[static_cast<int>(m_turn)].isPlayerWon() && !m_is_playing_in_team) {
					removeFromPlayingList();                            //remove from playing list�.
				}
				else if (m_players[static_cast<int>(m_turn)].isPlayerWon()) {
					getScore();                                    //Get the score because the team is there
					m_scoreboard.displayScores();                        //Print the new Scores...
				}
				if (m_board.hasKilled()) {
					m_board.removeFromBoard(m_selected_Position);            //Remove the Piece from the Board
					m_board.askToUndraw(m_selected_Position);                //Undraw the Piece from the Board
					getScore();                                    //Get the score because killed the piece
					m_scoreboard.displayScores();                        //Print the new Scores�
				}
			} while (isScoreArrayEmpty() && isPlaying());
		}
		if (m_turn[previous_turn].isPlayerWon()) {
			m_turn = previous_turn;
		}
		changeTurn();
		ShowTurn();

	}


	~Ludu() {
		cout << "ludu Destructed" << endl;
	}

};

