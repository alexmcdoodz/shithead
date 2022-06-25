//
//  player.hpp
//  cpp trial
//
//  Created by alex McDonald on 22/06/2022.
//

#ifndef player_hpp
#define player_hpp

#include <stdio.h>
#include "deck.hpp"

class Player {
public:
    Player(std::string input);
    std::vector<Card> faceDownCards;
    std::vector<Card> faceUpCards;
    std::vector<Card> handCards;
    std::string name;
    virtual void chooseFaceUpCards();
    Card putCardDown();
};

class Ai : public Player {
    using Player::Player;
    void chooseFaceUpCards() override;
};

class Human : public Player {
    using Player::Player;
};



#endif /* player_hpp */
