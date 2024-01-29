#ifndef USER_H
#define USER_H
#include "Order.h"
class User
{
    public:
        User(string);
        void setUsername(string);
        string  getUsername() const;
        void addOrder(Order);
        void print();
        vector<Order> getOrder();

    private:
        string username;
        vector<Order> order;
};

#endif // USER_H
