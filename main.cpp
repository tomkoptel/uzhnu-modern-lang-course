#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    while (cin) {
        int a, b;
        scanf("%d %d", &a, &b);

        int result = gcd(a, b);
        cout << "GCD " << result << endl;
        printf("%s\n", (result == 1) ? "YES" : "NO");
    }
    return 0;
}