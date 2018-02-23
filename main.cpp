#include <iostream>

using namespace std;

void print(string a, unsigned int n) {
    std::bitset<16> bitSet = std::bitset<16>(n);
    cout << a << endl;
    cout << bitSet.to_string() << endl;
    cout << "----" << endl;
}

int main() {
    unsigned int n, k;
    cin >> k;

    print("1", 1);
    print("k", k);

    n = 1 << k;
    print("1 << k", n);
    printf("%d\n", n);

    return 0;
}