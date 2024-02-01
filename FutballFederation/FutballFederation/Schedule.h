#pragma once
#include "Round.h"
#include "Referee.h"
class Schedule 
{
public:
	Schedule(vector<Round>);
	void updateReferreeinSchedule(Referee, Referee);
	void updateDateinSchedule(string, string);
private:
	vector<Round> round;
	

};

