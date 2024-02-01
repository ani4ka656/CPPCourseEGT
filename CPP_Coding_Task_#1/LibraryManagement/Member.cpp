#include "Member.h"

Member::Member(string name_, int age_, string memberID_) : name(name_), age(age_), memberID(memberID_)
{
}

void Member::setName(string name_)
{
    this->name = name_;
}

void Member::setAge(int age_)
{
    this->age = age_;
}

void Member::setMemberID(string memberID_)
{
    this->memberID = memberID_;
}

string Member::getName() const
{
    return this->name;
}

int Member::getAge() const
{
    return this->age;
}

string Member::getMemberID() const
{
    return  this->memberID;
}

void Member::display() const
{

    cout << "The name of the member is: " << getName() << endl
        << "The age of the member is: " << getAge() << endl
        << "The memberID of the member is: " << getMemberID() << endl;
    cout << "-------------------------------------------" << endl;
}

void Member::borrowBook(Book* book)
{
    cout << "The borrowed book is:" << endl;
    book->display();
    cout << "From:" << endl;
    display();

}
