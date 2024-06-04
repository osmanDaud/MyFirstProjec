#include "PhoneBook.h"
#include "Contacts.h"
#include <iostream>
#include <fstream>
using namespace std;

void PhoneBook::AddContacts()
{
    cout << "Enter a contacts's first name, last name and phone number all seperated by a space  \n";
    cin >> contacts[1] >> contacts[2] >> contacts[3];

    if (exist)
}

fstream File("contacts.txt");
void PhoneBook::SaveContactsToFile()
{

    bool exists = false;
    for (int i = 0; i < contacts.length++ i)
    {
        if (contacts[i].phoneNumber == phoneNumber)
        {
            exists = true;
            break;
        }
    }
}