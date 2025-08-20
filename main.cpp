#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "contact.h"
#include "showMenu.h"
#include "addContact.h";
#include "listContacts.h"
#include "findContact.h"
#include "deleteContact.h"
using namespace std;

int main() {
    int choice;

    while (true) {
        showMenu();
        cout << "명령 번호를 입력하세요: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                listContacts();
                break;
            case 3:
                findContact();
                break;
            case 4:
                deleteContact();
                break;
            case 0:
                cout << "프로그램을 종료합니다.\n";
                return 0;
            default:
                cout << "잘못된 입력입니다.\n";
        }
    }

    return 0;
}

