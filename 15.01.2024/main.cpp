#include <iostream>
#include <string>
using namespace std;
double parkingFee(int hours)
{
    if(hours < 24)
    {
        if(hours > 3)
        {
            double charge = 2 + (hours - 3) * 0.5;
            if(charge > 10)
                charge = 10;
            return charge;
        }
        else
            cout << "more than a day";
        //return 2;
    }
    else
        return 0;
}
void takePlaces(int* arr, int place, int cnt)
{
    if(arr[place] == 0 )
    {
        arr[place] = 1;
        cout<< place + 1 << " is your seat" <<endl;
    }
    else
    {
        for(int i = 0; i < cnt; i++)
        {
            if (arr[i]==0)
            {
                arr[i]=1;
                cout<< i + 1 << " is your new seat" <<endl;
                break;
            }
        }
    }
}
int main()
{
    //rand() - function : library #include <cstdlib>
    //srand() ???
    //enum - look et the reference
    //storage classes
    //global variables
    //scopes - scopes rules, scopes for identifiers
    //static variables
    //stack type of implementation of functions and other actions
    //inline functions
    //references
    //overloading -
    //template type class for overloading
    //recursion and iteration
    //task 1
    /*Garage:
    3 hours = 2 dollars
    for additional hours +0.50
    for 24 hours = max 10 dollars
    ? a program returning the parking fee
    no more than 24 hours for parking a car */
    /* string cstr1 = "customer1";
     int hours = 5;
     cout << "customer: " << cstr1 << " has " << parkingFee(hours) << " dollar fee for " << hours << " hours" << endl;
      string cstr2 = "customer2";
     int hours2 = 10;
     cout << "customer: " << cstr2 << " has " << parkingFee(hours2) << " dollar fee for " << hours2 << " hours" << endl;
      string cstr3 = "customer3";
     int hours3 = 24;
     cout << "customer: " << cstr3 << " has " << parkingFee(hours3) << " dollar fee for " << hours3 << " hours" << endl;*/
    /*string cstr[100] = {"cstr1", "cstr2", "cstr3"};
    int hours[100] = {5, 10, 25};
    for(int i = 0; i < 3; i++)
    {
        if(parkingFee(hours[i])!=0)
        {
            cout << "customer: " << cstr[i] << " has " << parkingFee(hours[i]) << " dollars fee for " << hours[i] << " hours" << endl;
        }
        else cout << "customer: " << cstr[i] << "has parked for more than a day" << endl;
    }*/
    //passing arrays as function parameters
    //task2
    /*Automated reservations system
    a program to assign seats on each flight for small airline. The company has only one plane with 10 seats. Make appropriate menu and messages*/
   /* const int arraySize = 10;
    int a[arraySize] = {};
    for(int i =0; i < arraySize; i++)
    {
        cout <<a[i];
        cout << endl;
    }
    int people = 10;
    for(int i = 0; i < people; i++)
    {
        int place;
        cout << "Please choose your seat from 1 to 10: ";
        cin >> place;
        takePlaces(a, place-1, arraySize);
    }
    for(int i = 0; i < arraySize; i++)
    {
        cout <<a[i];

    }*/
    int a = 5;
    int *p;
    p = &a;
    //*p += 1;
    int *b = p;
    (*b) += 8;
    (*p)++;
    a++;
    cout<< *p << endl;
    cout << (*b)++<< endl;
    cout << a;
    //default values in constructors for member variables
    //destructors

    return 0;
}
