#pragma once
#include<vector>
using namespace std;
class ScoreBoard
{
private:
	vector<short>m_scores;
	int nos;
public:
	ScoreBoard() {

	}
	~ScoreBoard() {

	}
	void displayScores(vector<short> scores);
	void selectScore(int sc);  
};

