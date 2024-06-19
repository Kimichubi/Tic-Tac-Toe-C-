#include "Class.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Game::game(Game& game) {
	do {
		game.table(game);
		int num = 0;
		cout << "Jogadores online : " << game.player1Name << " & " << game.player2Name << endl;
		cout << "Qual a sua jogada -> Escolha entre 0 a 8  " << " Jogador da vez : " << game.playerTurn << endl;
		cin >> num;

		if (num <= 2) {
			if (game.board[0][num] == " ") {
				game.board[0][num] = game.playerTurn;
				game.checkWinner(game);
				game.changePlayerTurn(game);
			}
			else {
				cout << "Posicao ja ocupada" << endl;
			}
		}
		else if (num <= 5) {
			if (game.board[1][num - 3] == " ") {
				game.board[1][num - 3] = game.playerTurn;
				game.checkWinner(game);
				game.changePlayerTurn(game);
			}
			else {
				cout << "Posicao ja ocupada" << endl;
			}
		}
		else if (num <= 8) {
			if (game.board[2][num - 6] == " ") {
				game.board[2][num - 6] = game.playerTurn;
				game.checkWinner(game);
				game.changePlayerTurn(game);
			}
			else {
				cout << "Posicao ja ocupada" << endl;
			}
		}
	} while (game.winner == false);

	if (game.winner == true) {
		game.table(game);
		cout << "Parabens jogador : " << game.nameWinner << " Voce ganhou!" << endl;
	}
}

void Game::table(Game& game) {
	for (int i = 0; i < game.board.size(); i++) {
		for (int j = 0; j < game.board.size(); j++) {
			cout << game.board[i][j];
			if (j < game.board.size() - 1) cout << " | ";
		}
		std::cout << std::endl;
		if (i < game.board.size() - 1) cout << "---------" << endl;
	}
}

void Game::changePlayerTurn(Game& game) {
	game.playerTurn = (game.playerTurn == "X") ? "O" : "X";
}

void Game::checkWinner(Game& game) {
	int numberToColum = 0;

	for (int i = 0; i < game.board.size(); i++) {
		if (game.board[i][numberToColum] == "X" && game.board[i][numberToColum + 1] == "X" && game.board[i][numberToColum + 2] == "X") {
			game.winner = true;
			game.nameWinner = "X";
			break;
		}
		else if (game.board[i][numberToColum] == "O" && game.board[i][numberToColum + 1] == "O" && game.board[i][numberToColum + 2] == "O") {
			game.winner = true;
			game.nameWinner = "O";
			break;
		}
	}

	for (int i = 0; i < game.board.size(); i++) {
		if (game.board[numberToColum][i] == "X" && game.board[numberToColum + 1][i] == "X" && game.board[numberToColum + 2][i] == "X") {
			game.winner = true;
			game.nameWinner = "X";
			break;
		}
		else if (game.board[numberToColum][i] == "O" && game.board[numberToColum + 1][i] == "O" && game.board[numberToColum + 2][i] == "O") {
			game.winner = true;
			game.nameWinner = "O";
			break;
		}
	}
	if (game.board[0][0] == "X" && game.board[1][1] == "X" && game.board[2][2] == "X") {
		game.winner = true;
		game.nameWinner = "X";
	}
	else if (game.board[0][0] == "O" && game.board[1][1] == "O" && game.board[2][2] == "O") {
		game.winner = true;
		game.nameWinner = "O";
	}
}