#include "Team.h"

Team::Team(string name, string city)
{
	setName(name);
	setCity(city);
	this->points = 0;
}

void Team::setName(string name)
{
	this->name = name;
}

void Team::setCity(string city)
{
	this->city= city;
}

/*/void Team::setPoints(int)
{
}*/

string Team::getName()
{
	return this->name;
}

string Team::getCity()
{
	return this->city;
}

int Team::getPoints()
{
	return this->points;
}

void Team::updatePoints(int  newPoints)
{
	this->points = this->points + newPoints;
}
