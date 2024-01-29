#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "Team.h"
using namespace std;
class Play 
{
public:
	Play(Team, Team, string , vector<string>, vector <string>, vector<string>);
	void setResult(string);
	void setAway(Team);
	void setHome(Team);
	void setCartons(vector<string>);
	void setGoalPlayers(vector<string>);
	void setTimeGoals(vector<string>);
	string getResult();
	vector<string> getCartons();
	vector<string> getGoalPlayers();
	vector<string>getTimeGoals();
	void printGame();

private:
	Team away;
	Team home;
	string result;
	vector<string> cartons;
	vector<string> goalPlayers;
	vector<string> timeGoals;

};

