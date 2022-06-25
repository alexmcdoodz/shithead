//
//  deck.hpp
//  cpp trial
//
//  Created by alex McDonald on 20/06/2022.
//

#ifndef deck_hpp
#define deck_hpp

#include <string>
#include <map>
#include <stdio.h>
#include <vector>

//struct Suits {
//    std::string hearts = "hearts";
//    std::string diamonds = "diamonds";
//    std::string clubs = "clubs";
//    std::string spades = "spades";
//};

//struct Values {
//    std::string two = "two";
//    std::string three = "three";
//    std::string four = "four";
//    std::string five = "five";
//    std::string six = "six";
//    std::string seven = "seven";
//    std::string eight = "eight";
//    std::string nine = "nine";
//    std::string ten = "ten";
//    std::string jack = "jack";
//    std::string queen = "queen";
//    std::string king = "king";
//    std::string ace = "ace";
//};


struct Card {
    Card(std::string value = "blank", std::string suit = "blank");
    void assignCard(std::string value, std::string suit);
    std::string strValue;
    std::string strSuit;
};

class Deck {
public:
    std::vector<Card> deck;
    std::vector<std::string> strSuits {"diamonds", "hearts", "clubs", "spades"};
    std::map<int, std::string> strValues { {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}, {10, "ten"}, {11, "jack"}, {12, "queen"}, {13, "king"}, {14, "ace"} };
    void populateDeck();
    void shuffleDeck();
    Card dealCard();
    int size();
};


#endif /* deck_hpp */
