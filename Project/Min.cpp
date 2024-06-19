#include <iostream>
#include <string>
#include <vector>
#include "Class.h"
using namespace std;


int main() {
	string player1Name;
	string player2Name;
	string playerTurn = "X";
    vector<vector<string>> boardReal(3, vector<string>(3, " "));
	cout << "Informe o nome do player 1 : " << endl;
	cin >> player1Name;
	cout << "Informe o nome do player 2 : " << endl;
	cin >> player2Name;
	Game game(player1Name, player2Name, playerTurn, boardReal, false, "");
		game.game(game);





    
	return 0;
}