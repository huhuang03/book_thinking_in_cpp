#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char *argv[argc])
{
    string fileName = "e_2.3.cpp";
    ifstream file(fileName);
    string line;
    int count = 0;
    string word;
    if (file.is_open()) {
        while (getline(file, line)) {
            istringstream iss(line);
            while (iss >> word) {
                if (word.length() > 0) {
                    count++;
                }
            }
        }
    } else {
        cout << "can't open file " << fileName << endl;
    }
    cout << "the word count: " << count << endl;
    return 0;
}
