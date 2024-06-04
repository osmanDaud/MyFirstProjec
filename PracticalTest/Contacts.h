#pragma once 
#include <string>

class Contacts
{
private:
    string fName;
    string lNames;
    string pNumber;

public:
    // constructors
    Contacts();
    
    Contacts(string firstName, string lastName, string phoneNumber);


    void setFName(string firstName);
    void setLName(string lastName);
    void setPnumber(string phoneNumber);

    string getFName();
    string getLName();
    string getPNumber();

    

};

