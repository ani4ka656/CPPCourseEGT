#pragma once
#include <iostream>
#include <string>
using namespace std;
class User
{
public:
	User(string, string);
	void setName(string);
	void setPassword(string);
	string getName() const;
	string getPassword() const;
private:
	string name;
	string password;
};

