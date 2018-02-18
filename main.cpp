#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int maxGcd() {
    vector<int> array;
    char c;
    int number;
    do {
        scanf("%d", &number);
        array.push_back(number);
    } while (scanf("%c", &c), c != '\n');

    int maxVal = 0;
    if (!array.empty()) {
        for (int i = 0; i < array.size(); ++i) {
            for (int j = i + 1; j < array.size(); ++j) {
                int a = array[i];
                int b = array[j];
                int gcdResult = gcd(a, b);

                maxVal = max(maxVal, gcdResult);
                cout << "Comparing: " << a << " and " << b << " gcd is " << gcdResult << endl;
            }
        }
    }

    return maxVal;
}

/**
 *
 * Input:
 * 3
 * 10 20 30 40
 * 7 5 12
 * 125 15 25
 *
 * Output:
 * 20 1 25
 *
 * @return 0
 */
int main() {
    int tries;
    cin >> tries;
    cin.get();

    auto *results = new int[tries];
    for (int i = 0; i < tries; ++i) {
        results[i] = maxGcd();
    }

    for (int i = 0; i < tries; ++i) {
        cout << results[i] << endl;
    }
}