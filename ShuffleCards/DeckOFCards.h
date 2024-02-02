#pragma once
#include "PlayingCard.h"
#include <vector>
#include <cstdlib> 
using namespace std;

class DeckOFCards
{
private:
	
	vector<PlayingCard> deck;
public:
	void ruffleShuffle();
	void makeDeck();
	vector<PlayingCard> getDeck();
	void displayDeck();
	
};
