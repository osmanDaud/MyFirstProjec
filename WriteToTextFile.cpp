#include <iostream>
#include <fstream>

using namespace std;

 	int main(){

 		ofstream myfile;
 		myfile.open("exampleText.txt");

 	if (myfile.is_open()) {
 		cout << "file opend succesful aand details whre entered \n";

 		myfile << "this is a the first line \n";
 		myfile << "this is a the second line \n";
 		myfile << "this is a the third line \n";
 		myfile << "this is a the fourth line \n";
 		myfile.close();
 	}

 	else 
 	cout << "file filed to open"<<endl;

 	return 0;
 	}