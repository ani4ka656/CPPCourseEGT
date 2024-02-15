#include <iostream>
using namespace std;
int main(){
int num;
cout << "Please insert the number you want to be checked" << endl;
/*cin >> num;
if (num % 2 == 0)
    cout << "The number is even" << endl;
    else
    cout << "The number is odd" << endl;*/
while(cin >> num && num != 0){ //while the user is inputting number that is different than zero we check the number if it is even or odd
    if (num % 2 == 0)
    cout << "The number is even" << endl;
    else
    cout << "The number is odd" << endl;
}
return 0;
}

