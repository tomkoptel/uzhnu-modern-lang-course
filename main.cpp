#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

/**
 * In: 2 1
 * Out: 1
 *
 * @return
 */
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    cout << gcd(a, b) << endl;
    return 0;
}