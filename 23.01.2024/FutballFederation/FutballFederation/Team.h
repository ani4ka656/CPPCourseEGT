#pragma once
#include <string>
using namespace std;
class Team
{
public:
	Team(string, string);
	void setName(string);
	void setCity(string);
	//void setPoints(int);
	string getName();
	string getCity();
	int getPoints();
	void updatePoints(int);


private:
	string name;
	string city;
	int points;

};

