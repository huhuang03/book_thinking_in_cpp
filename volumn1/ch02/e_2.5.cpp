#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> v;
    ifstream in("e_2.3.cpp");
    string line;
    while (getline(in, line)) {
        v.push_back(line);
    }
    
    for (int i = v.size() -1; i >= 0; i--) {
        cout << i << ": " << v[i] << endl;
    }
}
