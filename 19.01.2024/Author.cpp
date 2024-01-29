#include "Author.h"

Author::Author(string name, string lastName, string nationality) : name(name), lastName(lastName), nationality(nationality){}
void Author::setName(string name)
{
    this->name = name;
}
void Author::setLastName(string lastName)
{
    this->lastName = lastName;
}
void Author::setNatinality(string nationality)
{
    this->nationality = nationality;
}
string Author::getName() const{
    return this->name;
}
string Author::getLastName() const{
    return this->lastName;
}
string Author::getNatinality() const{
    return this->nationality;
}
void Author::print() const{
    cout << getName() <<endl;
    cout << getLastName() <<endl;
    cout << getNatinality() <<endl;

}
