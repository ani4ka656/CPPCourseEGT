#include "Play.h"

Play::Play(Team away_, Team home_, string result, vector<string> cartons, vector<string> goalPlayers, vector<string>timeGoals) : away(away_), home(home_)
{

	//setResult(result);
	this->result = "0:0";
	setCartons(cartons);
	setGoalPlayers(goalPlayers);
	setTimeGoals(timeGoals);
}

void Play::setResult(string result)
{
	this->result = result;
}

void Play::setAway(Team away_)
{
	this->away = Team(away_.getName(), away_.getCity());
}

void Play::setHome(Team home_)
{
	this->home = Team(home_.getName(), home_.getCity());

}

void Play::setCartons(vector<string> carton)
{
	this->cartons = carton;
}

void Play::setGoalPlayers(vector<string> player)
{
	this->goalPlayers = player;
}

void Play::setTimeGoals(vector<string> time)
{
	this->timeGoals = time;
}

string Play::getResult()
{
	return this->result;
}

vector<string> Play::getCartons()
{
	return this->cartons;
}

vector<string> Play::getGoalPlayers()
{
	return this->goalPlayers;
}

vector<string> Play::getTimeGoals()
{
	return this->timeGoals;
}

void Play::printGame()
{
	cout << "Result: " << getResult() << endl; 
	for (int i = 0; i < cartons.size(); i++) {
		cout << "(Carton: " << i << ")" << this->cartons[i] << endl;
	}
	for (int i = 0; i < goalPlayers.size(); i++) {
		cout << "( Goal player:" << i << " )" << this->goalPlayers[i] << endl;
	}
	for (int i = 0; i < timeGoals.size(); i++) {
		cout << "( Time goal:" << i << " )" << this->timeGoals[i] << endl;
	}
	cout << "End play ------" << endl << endl;
	
}
