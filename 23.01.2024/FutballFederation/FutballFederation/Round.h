#pragma once
#include "Team.h";
#include "Referee.h"

class Round
{

public:
	Round(string, string, string, string, Play, Referee);
	void setDate(string);
	void setHour(string);
	void setCity(string);
	void setStadium(string);
	void setRefer(Referee);
	string getDate();
	string getHour();
	string getCity();
	string getStadium();
	Referee getRefer();
	void setPlay(Play);

private:
	string date;
	string hour;
	string stadium;
	string city;
	Play play;
	Referee refer;
};

