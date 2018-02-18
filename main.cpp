#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int sumGcd() {
    int entries;
    scanf("%d", &entries);

    auto *array = new int[entries];
    for (int i = 0; i < entries; ++i) {
        scanf("%d", &array[i]);
    }

    int sum = 0;
    for (int i = 0; i < entries; ++i) {
        for (int j = i + 1; j < entries; ++j) {
            int a = array[i];
            int b = array[j];
            int gcdResult = gcd(a, b);

            sum += gcdResult;
            cout << "Comparing: " << a << " and " << b << " gcd is " << gcdResult << endl;
        }
    }

    return sum;
}

/**
 *
 * Input:
 * 3
 * 4 10 20 30 40
 * 3 7 5 12
 * 3 125 15 25
 *
 * Output:
 * 70 3 35
 *
 * @return 0
 */
int main() {
    int tries;
    cin >> tries;
    cin.get();

    auto *results = new int[tries];
    for (int i = 0; i < tries; ++i) {
        results[i] = sumGcd();
    }

    for (int i = 0; i < tries; ++i) {
        cout << results[i] << endl;
    }
}