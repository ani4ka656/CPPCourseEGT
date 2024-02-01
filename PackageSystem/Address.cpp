#include "Address.h"

Address::Address(string personName, string phone, string city, string street): personName(personName), phone(phone), city(city), street(street) {}
void Address::print()const
{
    cout << this->personName << " " << this->phone << " " << this->city << " " << this->street;
}

string Address::getPersonName() const
{
    return this->personName;
}

string Address::getPhone() const
{
    return this->phone;
}
string Address::getCity() const
{
    return this->city;
}

string Address::getStreet() const
{
    return this->street;
}

void Address::setPersonName(string name){
    this->personName = name;
}
void Address::setPhone(string phone){
    this->phone = phone;
}

void Address::setCity(string city){
    this->city = city;
}
void Address::setStreet(string street){
    this->street = street;
}
