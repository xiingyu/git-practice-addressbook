#include "listContact.hpp"
#include "../contact.hpp"
#include <iostream>

void listContact() {
    std::cout << "\n--- 연락처 목록 ---\n";
    for (auto &c : contacts) {
        std::cout << "[" << c.id << "] "
             << c.name << " | " << c.phone << " | " << c.email << "\n";
    }
}
