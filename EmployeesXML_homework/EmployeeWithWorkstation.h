#pragma once
#include <iostream>
#include <string>
#include "Workstation.h"
using namespace std;
class EmployeeWithWorkstation
{
    public:
        EmployeeWithWorkstation(string, string, string, string, string, string);
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
        Workstation workstation;

    };



