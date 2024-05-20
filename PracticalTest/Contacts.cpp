#include "Contacts.h"
using namespace std;

    // constructors
    Contacts::Contacts()
    {
        fName = "";
        lNames = "";
        pNumber = "";
    }

    Contacts::Contacts(string firstName, string lastName, string phoneNumber)
    {
        fName = firstName;
        lastName = lastName;
        pNumber = phoneNumber;
    }

    // accessor methods

    void Contacts::setFName(string firstName)
    {
        fName = firstName;
    }

    void Contacts::setLName(string lastName)
    {
        lNames = lastName;
    }

    void Contacts::setPnumber(std::string phoneNumber)
    {
        pNumber = phoneNumber;
    }

    void Contacts::setFName(string firstName)
    {
        fName = firstName;
    }

    Contacts::string getFName()
    {
        return fName;
    }

    Contacts::string getLName()
    {
        return lNames;
    }