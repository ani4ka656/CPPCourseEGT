#pragma once
#include <iostream>
#include <string>
using namespace std;
class Book
{
public:
	Book(string, string, int);
	string getTitle() const;
	string getAuthor() const;
	int getPages() const;
	void display() const;
private:
	string title;
	string author;
	int pages;

};

