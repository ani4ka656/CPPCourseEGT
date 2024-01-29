#include "User.h"

User::User(string name, string passw)
{
	setName(name);
	setPassword(passw);
}

void User::setName(string n)
{
	this->name = n;
}

void User::setPassword(string p)
{
	if (p.length() > 4 && p.length() < 20) {
		this->password = p;
	}
	else {
		while (!((p.length() > 4 && p.length() < 20)))
		{
			cout << "Incorrect password. Enter a new one;";
				cin >> p;
		}
		this->password = p;
	}
}

string User::getName() const
{
	return this->name;
}

string User::getPassword() const
{
	return this->password;
}
