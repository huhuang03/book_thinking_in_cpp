#include "fun.h"
#include <cstdarg>
#include <iostream>


using namespace std;

void foo(int num...) {
    va_list val;
    va_start(val, num);
    
    for (int i = 0; i < num; i++) {
        int arg = va_arg(val, int);
        cout << arg << endl;
    }
    
    va_end(val);
}

