#include <iostream>

using namespace std;

void print(string a, unsigned int n) {
    std::bitset<8> bitSet = std::bitset<8>(n);
    cout << a << endl;
    cout << bitSet.to_string() << endl;
    cout << "----" << endl;
}

int main() {
    unsigned int n;
    cin >> n;

    print("n", n);
    print("n - 1", n - 1);
    print("n & (n - 1)", n & (n - 1));
    int res = n - (n & (n - 1));
    print("n - (n & (n - 1))", res);

    cout << res << endl;

    return 0;
}