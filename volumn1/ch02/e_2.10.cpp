#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<float> v;
    float inputF;
    int total = 25;
    
    for (int i = 0; i < total; i++) {
        cin >> inputF;
        v.push_back(inputF);
    }

    for (int i = 0; i < total; i++) {
        v[i] = v[i] * v[i];
    }
    
    for (int i = 0; i < v.size(); i++) {
        cout << i << ": " << v[i] << endl;
    }
}
