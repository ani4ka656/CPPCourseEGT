#pragma once
#include <vector>
#include "User.h"
#include "Team.h"
class Admin : public User 
{
public:
	Admin(string, string);
	void addTeam(Team);
	void removeTeam(Team);
	void updateTeam(Team);
	vector<Team> getTeams();
private: 
	vector<Team> teams;
};

