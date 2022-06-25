//
//  Game.cpp
//  cpp trial
//
//  Created by alex McDonald on 22/06/2022.
//

#include "Game.hpp"
#include <typeinfo>

void Game::startGame(bool gameOver) {
    setUpGame();
    int playerToAct = 0;
    while (!gameOver) {
        
    }
}

void Game::playerTakesTurn(Player player) {
    
}


void Game::setUpPlayers() {
    int humanAmout;
    int AiAmount;
    std::cout << "human amout: " << std::endl;
    std::cin >> humanAmout;
    std::cout << "AI amount: " << std::endl;
    std::cin >> AiAmount;
    
    for (int i = 0; i < AiAmount; i++) {
        std::string name = "Ai";
        Ai ai("AI");
        players.push_back(ai);
    }
    Human human("Human");
    players.push_back(human);
}

void Game::dealCards() {
    for (auto player : players) {
        for (int i = 0; i < 3; i++) {
            player.faceDownCards.push_back(deck.dealCard());
        }
    }
    for (auto player : players) {
        for (int i = 0; i < 6; i++) {
            player.handCards.push_back(deck.dealCard());
        }
    }
}

void Game::setUpGame() {
    setUpPlayers();
    deck.populateDeck();
    deck.shuffleDeck();
    dealCards();
}
