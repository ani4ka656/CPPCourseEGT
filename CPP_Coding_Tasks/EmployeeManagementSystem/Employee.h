#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employee
{
	private:
		string name;
		string employeeID;
		string position;
	public:
		Employee(string, string, string);
		void setName(string);
		void setEmployeeID(string);
		void setPosition(string);
		string getName() const;
		string getEmployeeID() const;
		string getPosition() const;
		void display() const;
};

