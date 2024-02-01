#ifndef AUTHOR_H
#define AUTHOR_H
#include <string>
using namespace std;

class Author
{
public:
    Author(string, string, string);
    void setName(string);
    void setLastName(string);
    void setNatinality(string);
    string getName() const;
    string getLastName() const;
    string getNatinality() const;
    void print() const;


private:
    string name;
    string lastName;
    string nationality;
};

#endif // AUTHOR_H
