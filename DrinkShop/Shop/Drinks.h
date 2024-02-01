#ifndef DRINKS_H
#define DRINKS_H

class Drinks
{
public:
    Drinks(string, double, int, string);
    void setName(string);
    void setPrice(double);
    void setQuantity(int);
    void setType(string);
    string getName()const;
    double getPrice()const;
    int getQuantity()const;
    string getType()const;
    virtual void print();
    virtual Drinks* clone() const = 0;
    virtual double calculatePrice();
    int updateQuantity(int);

private:
    string name;
    double price;
    int quantity;
    string type;
};

#endif // DRINKS_H
