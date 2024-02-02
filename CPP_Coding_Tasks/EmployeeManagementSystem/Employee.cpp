#include "Employee.h"

Employee::Employee(string name_, string employeeID_, string position_) : name(name_), employeeID(employeeID_), position(position_)
{
}

void Employee::setName(string name_)
{
    this->name = name_;
}

void Employee::setEmployeeID(string employeeID_)
{
    this->employeeID = employeeID_;
}

void Employee::setPosition(string position_)
{ 
    this->position = position_;
}

string Employee::getName() const
{
    return this->name;
}

string Employee::getEmployeeID() const
{
    return this->employeeID;
}

string Employee::getPosition() const
{
    return this->position;
}

void Employee::display() const
{
    cout << "The name of the employee is: " << getName() << endl
         << "The employeeID of the employee is: " << getEmployeeID() << endl
         << "The position of the employee is: " << getPosition() << endl;
    cout << "------------------End of employee-------------------------" << endl;
}
