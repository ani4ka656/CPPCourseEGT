#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    Employee(string name_, string type_, string age_) :name(name_), type(type_), age(age_) {}
    void setName(string);
    void setType(string);
    void setAge(string);
    string getName() const;
    string getType() const;
    string getAge() const;
    void print() const;
private:
    string name;
    string type;
    string age;

};

