#include "deleteContact.hpp"

extern vector<Contact> contacts;

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
