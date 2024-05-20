#include <iostream>
#include <fstream>

using namespace std;
 	int main(){
 		ofstream myfile("newText.txt");
 	myfile << "will have to manage the time that we have \n";

 		cout << myfile.tellp()<<endl;
 	myfile.seekp(20);
 	myfile << "little time that a day  gives and make sure that we are putting \n";

 	myfile.close();

 	return 0;

 	}