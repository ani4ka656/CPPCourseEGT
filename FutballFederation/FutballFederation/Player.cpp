#include "Player.h"

Player::Player(string name, Team team)
{
    setName(name);
    setTeam(team);
}

void Player::setTeam(Team team)
{
    this->team = team;
}

void Player::setName(string)
{
    this->name = name;
}

string Player::getName() const
{
    return this->name;;
}

Team Player::getTeam()
{
    return this->team;
}
