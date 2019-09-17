#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    float inputF;
    int total = 25;
    
    vector<float> v1;
    for (int i = 0; i < total; i++) {
        cin >> inputF;
        v1.push_back(inputF);
    }

    vector<float> v2;
    for (int i = 0; i < total; i++) {
        cin >> inputF;
        v2.push_back(inputF);
    }

    vector<float> v3;
    for (int i = 0; i < total; i++) {
        v3.push_back(v1[i] + v2[i]);
    }
    
    for (int i = 0; i < v3.size(); i++) {
        cout << v1[i] << " + " << v2[i] << " = " << v3[i] << endl;
    }
}
