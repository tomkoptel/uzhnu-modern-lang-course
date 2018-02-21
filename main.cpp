#include <iostream>

using namespace std;

int hotpo(int n) {
    if (n % 2) {
        return n * 3 + 1;
    } else {
        return n >> 1;
    }
}

int main() {
    int tests;
    cin >> tests;

    while (tests--) {
        int testNumber, n;
        cin >> testNumber >> n;

        int max = n;
        while (n != 1) {
            n = hotpo(n);
            if (max < n) max = n;
        }
        printf("%d %d\n", testNumber, max);
    }
    return 0;
}
