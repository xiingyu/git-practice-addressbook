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

// 연락처 구조체
struct Contact {
    int id;
    string name;
    string phone;
    string email;
};

// 전역 벡터 (간단하게 메모리에 저장, 나중에 파일 입출력으로 확장 가능)
vector<Contact> contacts;
int nextId = 1;

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

