#include "Workstation.h"

void Workstation::setBuilding(string building_) { 
    this->building = building_; 
}
void Workstation::setFloor(string floor_) {
    this->floor = floor_;
}
void Workstation::setDesc(string desc_) {
    this->desc = desc_;
}

string Workstation::getBuilding() const {
    return this->building;

}
string Workstation::getFloor() const {
    return this->floor;
}
string Workstation::getDesc() const{
    return this->desc;
}

void Workstation::print() const
{
    cout << "Bulding = " << getBuilding() << "    "
        << "Floor = " << getFloor() << "    "
        << "Desc = " << getDesc() << endl;

}
