#ifndef ORDER_H
#define ORDER_H
#include <vector>
#include "Drinks.h"
#include "Alcoholic.h"
#include "NoAlcoholic.h"

class Order
{
    public:
       // Order(int, string, double = 0);
        Order( string, double = 0);
        void addDrink(Drinks* );
        void setDate(string);
        void setNumber(int);
        string getDate() const;
        int getNumber() const;
        void print();
        void calculateSum();
        double getSum();
        vector <Drinks*> getDrinks();
    private:
        static int numberOfOrders;
        int number;
        vector <Drinks*> dr;
        string date;
        double sum;

};

#endif // ORDER_H
