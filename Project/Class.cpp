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
                game.changePlayerTurn(game);
            }
            else {
                cout << "Posicao ja ocupada" << endl;
            }
           

        }
        else if (num <= 5) {
            if(game.board[1][static_cast<std::vector<std::string, std::allocator<std::string>>::size_type>(num) - 3] == " "){
                game.board[1][static_cast<std::vector<std::string, std::allocator<std::string>>::size_type>(num) - 3] = game.playerTurn;
                game.changePlayerTurn(game);
            }
            else {
                cout << "Posicao ja ocupada" << endl;
            }
           
         
        }
        else if (num <= 8) {
            if (game.board[2][static_cast<std::vector<std::string, std::allocator<std::string>>::size_type>(num) - 6] == " ") {
                game.board[2][static_cast<std::vector<std::string, std::allocator<std::string>>::size_type>(num) - 6] = game.playerTurn;
                game.changePlayerTurn(game);

            }
            else {
                cout << "Posicao ja ocupada"<< endl;
            }
            
        }

    } while (true);
    
    
   
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




}
void Game::restartGame(Game& game) {




}