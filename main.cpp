#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * 2; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    for (int j = 2; j <= n; ++j) {
        if (prime[j]) {
            cout << j << " ";
        }
    }

    return 0;
}