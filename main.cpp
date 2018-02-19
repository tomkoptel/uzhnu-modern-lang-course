#include <iostream>

using namespace std;

long exponent(long x, long n, long m) {
    if (n == 0) return 1;

    if (n % 2 == 0) {
        return (exponent((x * x) % m, n / 2, m)) % m;
    } else {
        return (x * exponent(x, n - 1, m)) % m;
    }
}

int main() {
    long a, b, m;
    cin >> a >> b >> m;

    cout << exponent(a, b, m) << endl;
    return 0;
}