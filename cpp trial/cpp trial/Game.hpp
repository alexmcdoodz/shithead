//
//  Game.hpp
//  cpp trial
//
//  Created by alex McDonald on 22/06/2022.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <iostream>

#include "deck.hpp"
#include "player.hpp"

class Game {
public:
    void startGame(bool gameOver);
    void setUpGame();
    void setUpPlayers();
    void dealCards();
    void playersChooseFaceDownCards();
    void playerTakesTurn(Player player);
    std::vector<Player> players;
    std::vector<Card> stack;
    Deck deck;
    bool gameOver = false;
};

#endif /* Game_hpp */
