#include <iostream>
#include <string>

using namespace std;
 	int main() {
 		string fname;
 		string lname;
 		string password;

 		
 		cout << "enter your first name "<<endl;
 			cin >> fname;
 		cout << "enter your last names "<<endl;
 		getline(cin,lname);
 		cout <<"enter your password"<<endl;
 		cin >> password;
 		if (password == "bedcom07"){
 			cout << "hello mr "<<fname<< " "<<lname<<" welcome "<<endl;
 		}
 		else
 		cout << "your password"<<password<<" is not accepted mr "<<fname<< " "<<lname<<endl;
 	return 0;
 	}