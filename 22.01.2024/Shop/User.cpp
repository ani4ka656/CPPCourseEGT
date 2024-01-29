#include "User.h"


User::User(string username) :username(username)
{
}

void User::setUsername(string name)
{
    this->username = name;
}
string User::getUsername() const
{
    return this->username;
}
void User::addOrder(Order ord)
{
    this->order.push_back(ord);
}
void User::print()
{
    cout << "name of User:" << getUsername() << endl;
    for (int i = 0; i < order.size(); i++)
    {
        this->order[i].print();
    }

}
vector<Order> User::getOrder()
{

    return this->order;

}
