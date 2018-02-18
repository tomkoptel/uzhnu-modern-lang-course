#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    int gcdResult = gcd(a, b);
    return gcd ? (a / gcdResult * b) : 0;
}

int main() {
    int size;
    cin >> size;

    auto *array = new int[size];
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }

    int a = array[0];
    for (int i = 1; i < size; ++i) {
        int b = array[i];
        a = lcm(a, b);
    }

    cout << a << endl;

    return 0;
}