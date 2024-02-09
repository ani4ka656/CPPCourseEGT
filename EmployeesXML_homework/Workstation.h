#pragma once

#include <iostream>
#include <string>
using namespace std;
class Workstation {
public:
    Workstation() {}
    
    Workstation(string building_, string floor_, string desc_) : building(building_), floor(floor_), desc(desc_) {};
    void setBuilding(string);
    void setFloor(string);
    void setDesc(string);

    string getBuilding() const;
    string getFloor() const;
    string getDesc() const;

    void print() const;

private:
    string building;
    string floor;
    string desc;
};