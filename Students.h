#pragma once
#include <string>

using namespace std;

class Students
{
public:
	string fname;
	string lname;
	string regNum;
	int yearOfBirth;
	int currentYear;

	void initialiser();

	int getAge(int currentYear, int yearOfBirth);
};
