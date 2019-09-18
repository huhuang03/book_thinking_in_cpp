#include <iostream>
using namespace std;

int is_prime(int n) {
    for (int i = 2; i < n; i++) {
        if ((n % i) == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[argc])
{
    int i = 2;
    while (true) {
        if (is_prime(i)) {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}

