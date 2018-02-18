#include <iostream>

using namespace std;

long gcd(long x, long y) {
    while (x != 0 && y != 0) {
        if (x > y) x = x % y;
        else y = y % x;
    }
    return x + y;
}

int main() {
    long a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}