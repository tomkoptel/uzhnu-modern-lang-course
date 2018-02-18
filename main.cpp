#include <iostream>

using namespace std;

int gcd(int a, int b) {
    int reminder;
    while (b) {
        reminder = a % b;
        a = b;
        b = reminder;
    }
    return a;
}

int gcd2(int a, int b) {
    if (b == 0) return a;
    return gcd2(b, a % b);
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
        a = gcd2(a, b);
    }

    cout << a << endl;

    return 0;
}