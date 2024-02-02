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
            // cout << drink.size() << endl;
            for(int k = 0; k < drink.size(); k++)
            {


                // drink[k]->print();
                // drink[k]->print();
                if (usersDrinks.find(drink[k]->getName()) != usersDrinks.end())
                {
                    cout << "HERE THERE IS SUCH PRODCT" << endl;
                    //drink[k]->updateQuantity();

                    (*usersDrinks.find(drink[k]->getName())).second = drink[k]->updateQuantity(drink[k]->getQuantity());
                }
                else
                {
                    cout << "---NO SUCH PRODUCT---" << endl;
                    usersDrinks.insert({drink[k]->getName(), drink[k]->getQuantity()});
                }
            }

        }
    }
//    cout << usersDrinks.size();
    for (auto itr = usersDrinks.begin(); itr != usersDrinks.end(); ++itr)
    {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
}
void Shop::findCeritainDrink(string certainDrink)
{
    for(int i = 0; i < this->users.size(); i++)
    {
        vector<Order> order = this->users[i].getOrder();
        // cout << order.size() << endl;
        for(int j = 0; j< order.size(); j++)
        {
            vector<Drinks*> drink = order[j].getDrinks();
            for(int k = 0; k < drink.size(); k++)
            {

                if (drink[k]->getName()== certainDrink)
                {
                    cout <<  users[i].getUsername();

                }

            }

        }
    }
}
