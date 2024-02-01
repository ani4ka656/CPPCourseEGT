// FutballFederation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "User.h"
#include "Team.h"
#include "Admin.h"
#include "Referee.h"
#include "Play.h"
#include "Schedule.h"
#include "Round.h"

int main()
{
    User user1("Katya", "xytph");
    cout << user1.getPassword();
    Team team1("Liverpool", "Liverpool");
    Team team2("Barcelona", "Barcelona");
    Team team3("Inter", "Milan");
   //cout << team1.getPoints();
    Admin ad("Admin", "admin");
    cout << ad.getTeams().size() << endl;
    ad.addTeam(team1);
    ad.addTeam(team2);
    ad.addTeam(team3);
    cout << ad.getTeams().size() << endl;
    ad.removeTeam(team2);
    cout << ad.getTeams().size() << endl;
    Team t4("Liverpool", "Haskovo");
    ad.updateTeam(t4);
    for (Team t : ad.getTeams()) {
        cout << t.getName() << " " << t.getCity() << endl;
    }
    Referee ref1("Petar");
    vector<string> cartons1;
    string blue = "blue";
    string red = "red";
    string yellow = "yellow";
    cartons1.push_back(blue);
    cartons1.push_back(red);
    cartons1.push_back(red);
    vector<string> goalPlayers1;
    goalPlayers1.push_back("Ivan");
    goalPlayers1.push_back("Martin");
    vector<string> time1;
    time1.push_back("12:00");
    time1.push_back("85:00");

    Play play1(team1, team2, "1:0", cartons1, goalPlayers1, time1);
    Round
    play1.printGame();
    return 0;
}
