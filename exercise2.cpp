#include <iostream>
#include <fstream>

using namespace std;
	int main(){

		ofstream myfile("exampleText.txt");

		myfile.open("exampleText");


		if (myfile.is_open()){
			myfile << "file opended succesively. \n";
			myfile << "this is the second line \n";
			myfile << "this is another line \n";
			myfile << "this is the last line";
			}
		else 
			cout << "error in opening file";

		//myfile.close();
		return 0;

		}