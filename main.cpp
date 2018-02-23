#include <iostream>

using namespace std;

void print(string a, unsigned int n) {
    std::bitset<8> bitSet = std::bitset<8>(n);
    cout << a << endl;
    cout << bitSet.to_string() << endl;
    cout << "----" << endl;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    print("1 << k", 1 << k);
    print("n | (1 << k)", n | (1 << k));

    n = n | (1 << k);
    printf("%d\n", n);

    return 0;
}