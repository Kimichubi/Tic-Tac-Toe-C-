#include "Class.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;



void Game::game(Game& game) {
    do{
   
        game.table(game);
        int num = 0;
        cout << "Jogadores online : " << game.player1Name << " & " << game.player2Name << endl;
        cout << "Qual a sua jogada -> Escolha entre 0 a 8  " << " Jogador da vez : " << game.playerTurn << endl;
        cin >> num;

        if (num <= 2) {
            if(game.board[0][num] == " "){
                game.board[0][num] = game.playerTurn;
                game.checkWinner(game);
                game.changePlayerTurn(game);
            }
            else {
                cout << "Posicao ja ocupada" << endl;
            }
           

        }
        else if (num <= 5) {
            if(game.board[1][num - 3] == " "){
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
                cout << "Posicao ja ocupada"<< endl;
            }
            
        }
      

    } while (game.winner == false);


    if (game.winner == true) {
        game.table(game);
        cout << "Parabanes jogador : " << game.nameWinner << " Voce ganhou!" << endl;
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

    for (int i = 0; i < game.board.size(); i++) {
        for (int j = 0; j < game.board.size(); j++) {

            if (game.board[i][j] == "X" && game.board[i][j + 1] == "X" && game.board[i][j + 2] == "X") {
                game.winner = true;
                game.nameWinner = "X";
                break;
            }
            else if (game.board[i][j] == "O" && game.board[i][j + 1] == "O" && game.board[i][j + 2] == "O") {
                game.winner = true;
                game.nameWinner = "O";
                break;
            }
            else {
                break;
            }

        }
     }

    int numberToColum = 0;

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


    }






