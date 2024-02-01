#include "Schedule.h"

Schedule::Schedule(vector<Round> round) : round(round)
{
}

void Schedule::updateReferreeinSchedule(Referee oldR, Referee newR)
{
	for (int i = 0; i < round.size(); i++)
	{
		if (round[i].getRefer().getName() == oldR.getName()) {
			round[i].setRefer(newR) ;
		}
	}
	
}

void Schedule::updateDateinSchedule(string oldD, string newD)
{
	for (int i = 0; i < round.size(); i++)
	{
		if (round[i].getDate() == oldD) {
			round[i].setDate(newD);
		}
	}
}
