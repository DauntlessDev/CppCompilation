#include <iostream>

using namespace std;

int fib(int x) {
    if (x < 2 && x >= 0) {
        return x;
    } else {
        return fib(x-1)+fib(x-2);
    }
}

int main() {
    cout << fib(8) << endl;
}

