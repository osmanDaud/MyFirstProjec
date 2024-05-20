#include <iostream>
#include <string>

using namespace std;
class Contacts
{
private:
    string fName;
    string lNames;
    string pNumber;

public:
    // constructors
    Contacts()
    {
        fName = "";
        lNames = "";
        pNumber = "";
    }

    // overloaded constructors

    Contacts(string firstName, string lastName, string phoneNumber)
    {
        fName = firstName;
        lastName = lastName;
        pNumber = phoneNumber;
    }

    // accessor 

    void setFName(string firstName)
    {
        fName = firstName;
    }

    void setLName(string lastName)
    {
        lNames = lastName;
    }

    void setPnumber(string phoneNumber)
    {
        pNumber = phoneNumber;
    }

    void setFName(string firstName)
    {
        fName = firstName;
    }

    string getFName()
    {
        return fName;
    }

    string getLName()
    {
        return lNames;
    }

    string getPNumber()
    {
        return pNumber;
    }
};