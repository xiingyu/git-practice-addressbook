#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <vector>
using namespace std;

// 연락처 구조체
struct Contact {
    int id;
    string name;
    string phone;
    string email;
};

// 전역 변수 선언 (정의 아님)
extern vector<Contact> contacts;
extern int nextId;

#endif // CONTACT_H
