#include <iostream>

using namespace std;

void print(unsigned int n) {
    std::bitset<4> bitSet = std::bitset<4>(n);
    cout << bitSet.to_string() << endl;
}

int main() {
    unsigned int n, res;
    cin >> n;

    print(n);
    print(n - 1);

    res = (n & (n - 1));

    print(res);

    printf("%d\n", res);
    return 0;
}