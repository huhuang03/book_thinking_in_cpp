#include <iostream>
using namespace std;

int main() {
    char c;
    while(true) {
        cout << "Main Menu" << endl;
        cout << "l: left, r: right, q: quit -> ";
        cin >> c;
        if (c == 'q') {
            break;
        }
        
        switch(c) {
        case 'l':
            cout << "LEFT MENU: " << endl; 
            cout << "select a or b: ";
            cin >> c;
            switch (c) {
            case 'a':
                cout << "you chose 'a'" << endl;
                break;
            case 'b':
                cout << "you chose 'b'" << endl;
                break;
            default:
                cout << "you didn't choose a or b!"  << endl;
                break;
            }
            break;
        case 'r':
            cout << "RIGHT MENU: " << endl; 
            cout << "select c or d: ";
            cin >> c;
            switch (c) {
            case 'a':
                cout << "you chose 'c'" << endl;
                break;
            case 'b':
                cout << "you chose 'd'" << endl;
                break;
            default:
                cout << "you didn't choose c or d!"  << endl;
                break;
            }
            break;
        default:
            cout << "you must type l or r or q!" << endl;
        }
        
    }
    cout << "quitting menu.." << endl;
}
