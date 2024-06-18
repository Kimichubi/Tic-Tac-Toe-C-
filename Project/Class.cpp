#include "Class.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;





void Game::startGame(Game game) {
	

	cout << "Digite o nome do player 1:\n";
	cin >> game.player1Name;
	

	cout << "Digite o nome do player 2:\n";
	cin >> game.player2Name;
	cout << endl;

}



void Game::table() {
    vector<vector<string>> board(3, vector<string>(3, " "));

    // Configuração inicial do tabuleiro de jogo da velha (opcional)
    board[0][0] = "X";
    board[0][1] = "O";
    board[0][2] = "X";
    board[1][0] = "O";
    board[1][1] = "X";
    board[1][2] = "O";
    board[2][0] = "X";
    board[2][1] = "X";
    board[2][2] = "O";

    // Exibir o tabuleiro
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            cout << board[i][j];
            if (j < board[i].size() - 1) cout << " | "; // Separador de colunas
        }
        std::cout << std::endl;
        if (i < board.size() - 1) cout << "---------" << endl; // Separador de linhas
    }
}