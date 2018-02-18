#include <iostream>

using namespace std;

long gcd(long x, long y) {
    while (x != 0 && y != 0) {
        if (x > y) x = x % y;
        else y = y % x;
    }
    return x + y;
}

/**
 * In: 0 0 3 3
 * Out: 4
 *
 * @return 0
 */
int main() {
    long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double dx = abs(x2 - x1);
    double dy = abs(y2 - y1);

    cout << gcd(dx, dy) + 1 << endl;

    return 0;
}