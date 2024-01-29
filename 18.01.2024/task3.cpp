#include <iostream>
#include <list>
#include <iterator>
#include <set>
#include <stack>
using namespace std;
int main()
{
// 3 task
    stack<int> st;
    int number;
    while(cin>>number && number !=0)
    {
        st.push(number);

    }
    int ns[st.size()];
    int index = 0;
    //cout<<st.size();
    while(!st.empty())
    {
        ns[index] = st.top();
        index++;
        //cout << n << endl;
        st.pop();
    }

    for(int i = 0; i < index; i++)
    {
        cout << ns[i];

      //  ns.pop();
    }
    return 0;
}
