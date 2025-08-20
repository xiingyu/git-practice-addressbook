#include "find_contact.h"
#include "main.h"
#include <iostream>
using namespace std;

void findContact() {
    string keyword;
    cout << "검색할 이름 또는 전화번호: ";
    cin >> keyword;

    cout << "\n--- 검색 결과 ---\n";
    for (auto &c : contacts) {
        if (c.name.find(keyword) != string::npos ||
            c.phone.find(keyword) != string::npos) {
            cout << "[" << c.id << "] "
                 << c.name << " | " << c.phone << " | " << c.email << "\n";
        }
    }
}
