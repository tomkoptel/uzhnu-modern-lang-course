#include <iostream>

#define MOD 10000007

using namespace std;

long PowMod(long x, long n) {
    if (n == 0) return 1;

    if (n % 2 == 0) {
        return PowMod((x * x) % MOD, n / 2);
    } else {
        return (x * PowMod((x * x) % MOD, n / 2)) % MOD;
    }
}

/**
 * Solution taken from https://site.ada.edu.az/~medv/acm/Docs%20e-olimp/Volume%2055/5493.htm
 *
 * @return 0
 */
int main() {
    long n, k, res;
    while (scanf("%lld %lld", &n, &k), n + k) {
        res = (PowMod(n, k) + 2 * PowMod(n - 1, k) + PowMod(n, n) + 2 * PowMod(n - 1, n - 1)) % MOD;

        printf("%d\n", res);
    }

    return 0;
}