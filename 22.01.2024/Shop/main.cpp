
#include <iostream>
#include <string>
using namespace std;

#include "Drinks.cpp"
#include "Alcoholic.cpp"
#include "NoAlcoholic.cpp"
#include "Order.cpp"
#include "User.cpp"
#include "Shop.cpp"
int main()
{
    /*Drinks *dr1 = new Drink("tea", 1.2, 3, "hot bevarage");
    dr1->print();*/
    /*Alcoholic *al = new Alcoholic("whiskey",20.5, 2, "alcohol", 40, 0.2);
     al->print();
     NoAlcoholic *cf = new NoAlcoholic("cofee",1.5, 2, "noalcohol", 0.2, 0.2);
     cf->print();
     Order o(1, "today");
     o.addDrink(al);
     o.addDrink(cf);
     //o.print();
     User u1("John");
     u1.addOrder(o);
     u1.print();*/
    User customer1("John");
    User customer2("Maria");
    Drinks *al = new Alcoholic("JW",20.5, 2, "whiskey", 40, 0.2);
    Drinks *cf = new NoAlcoholic("Lavatzza",1.5, 2, "coffee", 0.2, 0.2);
    vector<Drinks*> myDrinks;
    myDrinks.push_back(al);
    myDrinks.push_back(cf);
    Order order1("today");
    Order order2( "yesterday");
    /*  for(int i = 0; i < myDrinks.size(); i++)
      {

          Alcoholic *ptr = dynamic_cast<Alcoholic *> (myDrinks.at(i));
          cout << "----" << myDrinks.at(i)->getName() << endl;
          order1.addDrink(myDrinks.at(i));
          if(ptr != 0) cout << "Alcoholic" <<endl;
          else cout << "NonAlcoholic" << endl;

      }*/
    order1.addDrink(al);
   order1.addDrink(cf);
  //  order2.addDrink(cf);
    order2.addDrink(cf);
    // order1.print();
    // order2.print();
    customer1.addOrder(order1);
    customer2.addOrder(order1);
    customer2.addOrder(order2);
    // customer1.print();
    // customer1.getOrder().at(1).print();
    Shop s;
    s.addUsers(customer1);
    s.addUsers(customer2);
    s.findNumberDrinks();
    return 0;

}
