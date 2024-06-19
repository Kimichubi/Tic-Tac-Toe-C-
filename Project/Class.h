#pragma once
#include <string>
#include <vector>

using namespace std;
class Game {
public:
	string player1Name;
	string player2Name;
	string playerTurn;
	bool winner;
	string nameWinner;
	vector<vector<string>> board;
	void game(Game& game);
	void table(Game& game);
	void changePlayerTurn(Game& game);
	void checkWinner(Game& game);
	Game(string player1Name, string player2Name, string playerTurn, vector<vector<string>> board, bool winner, string nameWinner) {
		this->player1Name = player1Name;
		this->player2Name = player2Name;
		this->playerTurn = playerTurn;
		this->board = board;
		this->winner = winner;
		this->nameWinner = nameWinner;
	}
};