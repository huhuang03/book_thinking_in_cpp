#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ifstream in("e_2.3.cpp");
    string line;
    while (getline(in, line)) {
        cout << line;
        getchar();
    }
}
