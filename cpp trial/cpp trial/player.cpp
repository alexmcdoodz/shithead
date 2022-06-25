//
//  player.cpp
//  cpp trial
//
//  Created by alex McDonald on 22/06/2022.
//

#include "player.hpp"
#include <iostream>


Player::Player(std::string input) {
    name = input;
}

void Player::chooseFaceUpCards() {
    for (int i = 0; i < 3; i++) {
        auto card = handCards.back();
        handCards.pop_back();
        faceUpCards.push_back(card);
    }
}

void Ai::chooseFaceUpCards() {
    for (int i = 0; i < 3; i++) {
        auto card = handCards.back();
        handCards.pop_back();
        faceUpCards.push_back(card);
    }
}

// write this better
Card Player::putCardDown() {
    int val;
    std::cin >> val;
    Card card = handCards[val];
    handCards.erase(handCards.begin() + val);
    return card;
}

// write this better
Card Ai::putCardDown() {
    Card card = handCards[0];
    handCards.erase(handCards.begin());
    return card;
}
