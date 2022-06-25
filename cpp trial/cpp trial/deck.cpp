//
//  deck.cpp
//  cpp trial
//
//  Created by alex McDonald on 20/06/2022.
//

#include "deck.hpp"
#include <algorithm>
#include <random>

Card::Card(std::string value, std::string suit) {
    strValue = value;
    strSuit = suit;
}

int Deck::size() {
    return deck.size();
}

void Deck::populateDeck() {
    for (auto& suit : strSuits) {
        for (auto&& [key,value] : strValues) {
            Card card(value, suit);
            deck.push_back(card);
        }
    }
}

void Deck::shuffleDeck() {
    std::shuffle(deck.begin(), deck.end(), std::random_device());
}

Card Deck::dealCard() {
    Card topCard;
    if (!deck.empty()) {
        topCard = deck.back();
        deck.pop_back();
    }
    return topCard;
}
