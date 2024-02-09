#include "EmployeeWithWorkstation.h"

EmployeeWithWorkstation::EmployeeWithWorkstation(string name_, string type_, string age_, string building_, string floor_, string desc_)
    : name(name_), type(type_), age(age_) {
     workstation.setBuilding(building_);
     workstation.setFloor(floor_);
     workstation.setDesc(desc_);
}

void EmployeeWithWorkstation::setName(string name_)
{
    this->name = name_;
}

void EmployeeWithWorkstation::setType(string type_)
{
    this->type = type_;
}

void EmployeeWithWorkstation::setAge(string age_)
{
    this->age = age_;
}

string EmployeeWithWorkstation::getName() const
{
    return this->name;
}

string EmployeeWithWorkstation::getType() const
{
    return this->type;
}

string EmployeeWithWorkstation::getAge() const
{
    return this->age;
}
void EmployeeWithWorkstation::print() const
{
    cout << "Name = " << getName() << "    "
         << "Type = " << getType() << "    "
         << "Age = " << getAge() << "    " << endl;
    workstation.print();
    cout << endl;
     
}
