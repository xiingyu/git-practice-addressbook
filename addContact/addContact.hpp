#ifndef ADDCONTACT_H
#define ADDCONTACT_H

#include <vector>
#include "../contact.hpp"

using namespace std;

extern vector<Contact> contacts;
extern int nextId;

void addContact();

#endif // ADDCONTACT_H
