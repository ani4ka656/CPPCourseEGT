#pragma once
#include "Book.h"
class Member
{
private:
	string name;
	int age;
	string memberID;
public:
	Member(string, int, string);
	void setName(string);
	void setAge(int);
	void setMemberID(string);
	string getName() const;
	int getAge() const;
	string getMemberID() const;
	void display() const;
	void borrowBook(Book*);
};

