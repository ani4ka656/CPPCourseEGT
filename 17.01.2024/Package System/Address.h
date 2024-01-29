#ifndef ADDRESS_H
#define ADDRESS_H
using namespace std;

class Address
{
public:
    Address(string, string, string, string);
    void print() const;
    string getPersonName() const;

    string getPhone() const;
    string getCity() const;
    string getStreet() const;

    void setPersonName(string);
    void setPhone(string);
    void setCity(string);
    void setStreet(string);

private:
    string personName;
    string phone;
    string city;
    string street;
};

#endif // ADDRESS_H
