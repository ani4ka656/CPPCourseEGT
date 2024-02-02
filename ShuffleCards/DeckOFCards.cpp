#include "DeckOFCards.h"

void DeckOFCards::makeDeck()
{
	string type[] = { "A", "K", "Q", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2" };
	string suit[] = { "spades", "diamonds", "hearts", "clubs" };
	for (int i = 0; i < 52; i++)
	{
		/*cout << type[(i % 13)];
		cout << suit[(i / 13)] << endl;*/
		PlayingCard p(type[(i % 13)], suit[(i / 13)]);
		deck.push_back(p);


	}

}

void DeckOFCards::displayDeck()
{
	for (int i = 0; i < 52; i++)
	{
		
		deck[i].print();


	}
}

void DeckOFCards::ruffleShuffle()
{
	vector<PlayingCard> firstHalf;
	vector<PlayingCard> secondHalf;
	for (int i = 0; i*2 < deck.size(); i++)
	{
		firstHalf.push_back(deck[i]);

	}
	for (int i = deck.size()/2; i < deck.size(); i++)
	{
		secondHalf.push_back(deck[i]);

	}
	int count = 0;
	vector<PlayingCard> newDeck;
	while (count != 26) {
		int i = rand() % 26;
		newDeck.push_back(firstHalf[i]);
		int j = rand() % 26;
		newDeck.push_back(firstHalf[j]);
		count++;
	}
	for (int i = 0; i < 52; i++)
	{

		newDeck[i].print();


	}
}
vector<PlayingCard> DeckOFCards::getDeck() {

	return this->deck;
}