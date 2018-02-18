#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

/**
 * In: 125 80 67835 1000 25
 * Out: 5
 *
 * @return
 */
int main() {
    int size;
    cin >> size;

    auto * array = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    int a = array[0];
    for (int i = 0; i < size; ++i) {
        int b = array[i];
        a = gcd(a, b);
    }

    cout << a << endl;

    return 0;
}