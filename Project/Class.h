#pragma once
#include <string>
using namespace std;
class Game {
public:
	string 	player1Name;
	string  player2Name;

	void startGame(Game game);
	void table();
	void playerTurn();
	void checkWinner();
	void restartGame();


};