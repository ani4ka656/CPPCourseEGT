#pragma once
#include <string>
#include <iostream>
using namespace std;
class PlayingCard
{
private:
	string type;
	string suit;
public:
	PlayingCard(string, string);
	void setType(string);
	void setSuit(string);
	string getType() const;
	string getSuit() const;
	void print() const;

};

