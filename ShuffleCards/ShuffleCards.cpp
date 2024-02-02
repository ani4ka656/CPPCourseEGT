// ShuffleCards.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "PlayingCard.h"
#include "DeckOFCards.h"
int main()
{
    PlayingCard p("3", "heart");
    p.print();
    DeckOFCards deck;
      deck.makeDeck();
  //  deck.displayDeck();
  
    deck.ruffleShuffle();

    return 0;
}