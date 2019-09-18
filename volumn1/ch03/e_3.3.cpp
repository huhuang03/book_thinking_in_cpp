#include <iostream>
using namespace std;

int main(int argc, char *argv[argc])
{
    string str;
    while (true) {
        cin >> str;
        int a = -1;
        if (str == "q") {
            a = 0;
        } else if (str == "hello") {
            a = 1;
        }
        
        switch (a) {
        case 1:
            cout << "hello" << endl;
            break;
        case 0:
            break;
        default:
            cout << "en...." << endl;
            break;
        }
        
        if (a == 0) {
            break;
        }
    }
    return 0;
}
