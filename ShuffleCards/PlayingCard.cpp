#include "PlayingCard.h"

PlayingCard::PlayingCard(string type_, string suit_): type(type_), suit(suit_)
{
}

void PlayingCard::setType(string type_)
{
    this->type = type_;
}

void PlayingCard::setSuit(string suit_)
{
    this->suit = suit_;
}

string PlayingCard::getType() const
{
    return this->type;
}

string PlayingCard::getSuit() const
{
    return this->suit;
}

void PlayingCard::print() const {
    cout << getType() << endl
        << getSuit() << endl;

}