#include "Employee.h"

void Employee::setName(string name_)
{
    this->name = name_;
}

void Employee::setType(string type_)
{
    this->type = type_;
}

void Employee::setAge(string age_)
{
    this->age = age_;
}

string Employee::getName() const
{
    return this->name;
}

string Employee::getType() const
{
    return this->type;
}

string Employee::getAge() const
{
    return this->age;
}
void Employee::print() const
{
    cout << "Name = " << getName() 
        << "Type = " << getType()
        << "Age = " << getAge() << endl;

}
