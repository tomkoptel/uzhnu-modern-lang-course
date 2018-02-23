#include <iostream>

using namespace std;

void print(string a, unsigned int n) {
    std::bitset<8> bitSet = std::bitset<8>(n);
    cout << a << endl;
    cout << bitSet.to_string() << endl;
    cout << "----" << endl;
}

int main() {
    unsigned int n, k;
    cin >> n >> k;

    print("k", k);
    print("1 << k", 1 << k);

    print("(1 << k) - 1", (1 << k) - 1);
    print("~((1 << k) - 1)", ~((1 << k) - 1));

    print("-1", -1);
    print("-1 << k", -1 << k);

    n = n & (-1 << k);
    printf("%d\n", n);

    return 0;
}