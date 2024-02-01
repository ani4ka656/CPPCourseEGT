#include "Admin.h"

Admin::Admin(string name, string pass) : User(name, pass)
{
}

void Admin::addTeam(Team t)
{
	this->teams.push_back(t);
}

void Admin::removeTeam(Team t)
{
	string teamName = t.getName();
	for (int i = 0; i < teams.size(); i++)
	{
		if (teams[i].getName() == teamName) {
			teams.erase(teams.begin() + i);
		}
	}
}

void Admin::updateTeam(Team t)
{
	string teamName = t.getName();
	for (int i = 0; i < teams.size(); i++)
	{
		if (teams[i].getName() == teamName) {
			teams[i] = t;
			break;
		}
	}
}

vector<Team> Admin::getTeams()
{
	return this->teams;
}
