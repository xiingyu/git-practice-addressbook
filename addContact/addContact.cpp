#include "addContact.hpp"
#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool validatePhone(const string& phone)
{
    regex phonePattern(R"(^01[016789]-\d{3,4}-\d{4}$)");
    return regex_match(phone, phonePattern);
}

bool validateEmail(const string& email)
{
    regex emailPattern(R"(^(?:[a-zA-Z0-9!#$%&'*+/=?^_`{|}~-]+(?:\.[a-zA-Z0-9!#$%&'*+/=?^_`{|}~-]+)*|"(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21\x23-\x5b\x5d-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])*")@(?:(?:[a-zA-Z0-9](?:[a-zA-Z0-9-]*[a-zA-Z0-9])?\.)+[a-zA-Z]{2,}|(?:\[(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)(?:\.(?!$)|$)){4}\]))$)");
    return regex_match(email, emailPattern);
}

bool validateName(const string& name) 
{
    regex namePattern(R"(^[가-힣]{2,6}( [가-힣]{2,6})?$)");
    return regex_match(name, namePattern);
}

void addContact()
{
    Contact c;
    cout << "name(ex. 김수한무): ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, c.name);
    if (!validateName(c.name))
    {
        cout << "Error: Invalid input.\n";
        return;
    }
    cout << "phone number(ex. 010-1234-5678): ";
    cin >> c.phone;
    if (!validatePhone(c.phone))
    {
        cout << "Error: Invalid input.\n";
        return;
    }
    cout << "email(ex. temporal@gmail.com): ";
    cin >> c.email;
    if (!validateEmail(c.email))
    {
        cout << "Error: Invalid input.\n";
        return;
    }
    c.id = nextId++;
    contacts.push_back(c);
    cout << "new contact is added.\n";
}
