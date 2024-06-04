#pragma once
#include <string>

class PhoneBook
{
    // constructor
    PhoneBook();

    // memeber variables
    std::string contacts[5];
    int numberOfContacts;
    // functios
private:
    void AddContacts();
    void SaveContactsToFile();
    void ShouwAllContacts();

public:
    void Run();
}