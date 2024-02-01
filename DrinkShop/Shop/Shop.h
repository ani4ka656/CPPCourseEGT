#ifndef SHOP_H
#define SHOP_H
#include <map>
#include "Alcoholic.h"
#include "User.h"
#include "Drinks.h"
class Shop
{
    public:
        void addUsers(User);
        void findNumberDrinks();

    private:

        vector<User> users;
};

#endif // SHOP_H
