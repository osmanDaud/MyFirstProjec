#include "Students.h"
#include <iostream>

using namespace std;

int main()
{

	Students stud1;
	stud1.initialiser();
	stud1.fname = "Daud";

	cout << "hello mr  " << stud1.fname << " you are " << stud1.getAge(1994, 2024) << endl;

	return 0;
}