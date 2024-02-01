#include "Shop.h"

void Shop::addUsers(User name)
{
    users.push_back(name);

}
void Shop::findNumberDrinks()
{
    // cout << users.size();
    map<string, int> usersDrinks;
    for(int i = 0; i < this->users.size(); i++)
    {

        vector<Order> order = this->users[i].getOrder();
        // cout << order.size() << endl;
        for(int j = 0; j< order.size(); j++)
        {
            //  order[j].getDrinks();
            vector<Drinks*> drink = order[j].getDrinks();
            //  cout << drink.size() << endl;
            for(int k = 0; k < drink.size(); k++)
            {
                // drink[k]->print();
                if (usersDrinks.find(drink[k]->getName()) == usersDrinks.end())
                {
                    usersDrinks.insert({drink[k]->getName(),drink[k]->getQuantity()});
                }
                else
                {
                    cout << "------" << endl;
                    usersDrinks.insert({drink[k]->getName(), drink[k]->updateQuantity(drink[k]->getQuantity())});
                }
            }

        }
    }
    cout << usersDrinks.size();
      for (auto itr = usersDrinks.begin(); itr != usersDrinks.end(); ++itr)
      {
          cout << itr->first
               << '\t' << itr->second << '\n';
      }
}
