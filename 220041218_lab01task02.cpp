#include <iostream>
using namespace std;

enum etype { labourer = 'l', secretary = 's', manager = 'm', accountant = 'a', executive = 'e', researcher = 'r' };

int main() {
    cout << "Enter Employee type: ";
    char ch;
    cin >> ch;

    switch(ch) {
        case labourer:
            cout << "Employee type is labourer" << endl;
            break;
        case secretary:
            cout << "Employee type is secretary" << endl;
            break;
        case manager:
            cout << "Employee type is manager" << endl;
            break;
        case accountant:
            cout << "Employee type is accountant" << endl;
            break;
        case executive:
            cout << "Employee type is executive" << endl;
            break;
        case researcher:
            cout << "Employee type is researcher" << endl;
            break;
        default:
            cout << "Invalid employee type" << endl;
            break;
    }

    return 0;
}
