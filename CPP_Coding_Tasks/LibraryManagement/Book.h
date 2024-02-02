#pragma once
#include <iostream>
#include <string>
using namespace std;
class Book
{ 
private:
	string title;
	string author;
	string ISBN;
public:
	Book(string, string, string);
	void setTitle(string);
	void setAuthor(string);
	void setISBN(string);
	string getTitle() const;
	string getAuthor() const;
	string getISBN() const;
	void display() const;
};

