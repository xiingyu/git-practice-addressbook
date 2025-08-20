#ifndef ADDCONTACT_H
#define ADDCONTACT_H

#include <vector>
#include "../contact.hpp"

using namespace std;

extern vector<Contact> contacts;
extern int nextId;

bool validatePhone(const string& phone);
bool validateEmail(const string& email);
bool validateName(const string& name);
void addContact();

#endif // ADDCONTACT_H
