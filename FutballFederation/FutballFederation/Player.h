#pragma once
#include "Team.h"
#include <string>
class Player
{
	Player(string, Team);
	void setTeam(Team);
	void setName(string);
	string getName() const;
	Team getTeam();
private:
	string name;
	Team team;
};

