#include <iostream>

using namespace std;

long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long lcm(long a, long b) {
    long gcdVal = gcd(a, b);
    return gcdVal ? a * b / gcdVal : 0;
}

/**
 * In: 4 9 5 7
 * Out: 73 63
 *
 * In: 2 3 -1 6
 * Out: 3 6
 *
 * @return 0
 */
int main() {
    long a, b, c, d;
    cin >> a >> b >> c >> d;

    long lower = lcm(b, d);
    long upper = (lower * a / b) + (lower * c / d);

    long gcdResult = gcd(upper, lower);
    if (gcdResult != 0) {
        upper /= gcdResult;
        lower /= gcdResult;
    }

    cout << upper << " " << lower << endl;

    return 0;
}