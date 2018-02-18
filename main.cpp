#include <iostream>

using namespace std;

long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

/**
 * In: 2 4
 * Out: 1 2
 *
 * In: -12 15
 * Out: -4 5
 *
 * @return
 */
int main() {
    long a, b;
    cin >> a >> b;

    long gcdVal = gcd(max(a, b), min(a, b));
    a /= gcdVal;
    b /= gcdVal;

    cout << a << " " << b << endl;
    return 0;
}