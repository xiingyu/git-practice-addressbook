#include "listContac.h"
#include "main.h"

std::vector<Contact> contacts;

void listContacts() {
    std::cout << "\n--- 연락처 목록 ---\n";
    for (auto &c : contacts) {
        std::cout << "[" << c.id << "] "
             << c.name << " | " << c.phone << " | " << c.email << "\n";
    }
}
