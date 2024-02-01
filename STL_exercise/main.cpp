#include <iostream>
#include <list>
#include <iterator>
#include <set>
#include <map>
using namespace std;
//typedef multimap<int, int, less<int>> Count;
int main()
{
// 1 task
    list<int> myList;
    int number;
//cin >> number;
    /*while(number !=0){
         myList.push_back(number);
         cin>>number;
    }*/
    /*while(cin >> number && number !=0)
    {

        myList.push_back(number);
    }
    int sum = 0;
    /*for (list<int>::iterator i = myList.begin(); i != myList.end(); ++i){
            sum += *i;
        cout << *i << endl;
    }*/
    /*for(int num : myList){ //for only for reading values of the list
        sum += num;
        cout << num << endl;
    }

    cout<<sum;*/
//task2
    list<int> listSub;
    int numb1;
    while(cin >> numb1 && numb1 !=0)
    {
        listSub.push_back(numb1);
    }

    int counter[listSub.size()]/*[listSub.size()]*/;
    for (int i = 0; i < listSub.size() ; i++)
    {
        counter[i] = 1;
    }
    //counter[index]++;
    map<int, int> num;
    int index = 0;
    for (list<int>::iterator i = listSub.begin(); i != listSub.end(); ++i)
    {
        if(*next(i, 1) == *i)
        {
            counter[index]+=1;
        }
        else
        {
            num.insert(make_pair(*i, counter[index]));
            index+=counter[index];
        }
    }
    int maxim = counter[0];

    for(int i = 0; i < index; i++)
    {
        if(maxim < counter[i]) maxim = counter[i];
    }
    for(pair<int, int> el : num)
    {
        if(el.second == maxim)
            cout<< el.first << " " << el.second << endl;
    }


    /*int sizeC = 15;
    int arr[sizeC] = {12, 12, 4,4,4,8,1,4,4,4,4,4,8,9};
    set<int> mySet;
    mySet.insert(arr, arr + sizeC);
    for(int el : mySet){
        cout << el << " ";
        counters[el] = 0
    }
    for(pair<int, int> el : counters){
    cout<< el.first<< "->"<<el.second<<endl;
    for(int i = 0; i<sizeC; i++){
        //start counting
        //if current el is diff than next => count++
    }*/
    return 0;
}
