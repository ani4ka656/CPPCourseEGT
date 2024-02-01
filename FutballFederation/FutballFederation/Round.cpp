#include "Round.h"

Round::Round(string date, string hour, string stadium, string city, Play play, Referee refere) : date(date), hour(hour), stadium(stadium), city(city), play(play), refer(refere)
{

}

void Round::setDate(string date)
{
    this->date = date;
}

void Round::setHour(string hour)
{
    this->hour = hour;
}

void Round::setCity(string city)
{
    this->city = city;
}

void Round::setStadium(string stadium)
{
    this->stadium = stadium;

}

void Round::setRefer(Referee ref)
{
    this->refer = ref;
}

string Round::getDate()
{
    return this->date;
;
}

string Round::getHour()
{
    return this->hour;
}

string Round::getCity()
{
    return this->city;
}

string Round::getStadium()
{
    return this->stadium;
}

Referee Round::getRefer()
{
    return this->refer;
}

void Round::setPlay(Play pl)
{
    this->play = pl;
}
