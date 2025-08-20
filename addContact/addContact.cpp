#include "addContact.h"

void addContact(Contact c)
{
    c.id = nextId++;
    cout << "name: ";
    cin >> c.name;
    cout << "phone number: ";
    cin >> c.phone;
    cout << "email: ";
    cin >> c.email;

    contacts.push_back(c); # Assuming there is a global vector in main.cpp
    cout << "new contact is added.\n";
}
