#include <iostream>

    using namespace std;

    int main(){
        int number;

        cout << "Enter a number: \n";

        while (!(cin >> number)){
            cout << "your input is invalid, enter a new number: ";

            cin.clear();
            cin.ignore(150, '\n');
        }

            cout << "you entered "<<number<<" as your magic value"<<endl;
      return 0;
    }