#include "Students.h"

void Students::initialiser(){
	fname = "";
	lname = "";
	regNum = "";
	currentYear = 0;
	yearOfBirth = 0;

}
 int Students::getAge(int yearOfBirth, int currentYear){
 	return currentYear - yearOfBirth;
	
 }