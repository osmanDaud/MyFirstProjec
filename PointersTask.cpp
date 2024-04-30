#include <iostream>
#include <string>
using namespace std;

   int main(){
     int* number = new int;
     string* dynamicString = new string;

     cout << "enter a number: "<<endl;
     cin >> *number;
     cout << "enter a text: "<<endl;
     cin >> *dynamicString;

     cout << "the value of the dynamically allocated integer is: "<<*number<<endl;
     cout << "the value of the dynamic allocated string is: "<<*dynamicString<<endl;
     delete number;
     delete dynamicString;

     return 0;

}

