#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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

// 함수 선언
void showMenu();
void addContact();
void listContacts();
void findContact();
void deleteContact();

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

void showMenu() {
    cout << "\n===== 주소록 프로그램 =====\n";
    cout << "1. 연락처 추가\n";
    cout << "2. 연락처 목록 보기\n";
    cout << "3. 연락처 검색\n";
    cout << "4. 연락처 삭제\n";
    cout << "0. 종료\n";
}

void addContact() {
    Contact c;
    c.id = nextId++;
    cout << "이름: ";
    cin >> c.name;
    cout << "전화번호: ";
    cin >> c.phone;
    cout << "이메일: ";
    cin >> c.email;

    contacts.push_back(c);
    cout << "연락처가 추가되었습니다.\n";
}

void listContacts() {
    cout << "\n--- 연락처 목록 ---\n";
    for (auto &c : contacts) {
        cout << "[" << c.id << "] "
             << c.name << " | " << c.phone << " | " << c.email << "\n";
    }
}

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

void deleteContact() {
    int id;
    cout << "삭제할 연락처 ID: ";
    cin >> id;

    auto it = remove_if(contacts.begin(), contacts.end(),
                        [id](Contact &c) { return c.id == id; });

    if (it != contacts.end()) {
        contacts.erase(it, contacts.end());
        cout << "연락처가 삭제되었습니다.\n";
    } else {
        cout << "해당 ID의 연락처가 없습니다.\n";
    }
}
