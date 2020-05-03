#pragma once
class ScoreBoard
{
private:
	int* scores;
	int nos;
public:
	ScoreBoard() {

	}
	~ScoreBoard() {

	}
	void displayScores(int* n);
	void selectScore(int sc);  
};

