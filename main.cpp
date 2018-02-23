#include <iostream>

using namespace std;

void print(string a, unsigned int n) {
    std::bitset<8> bitSet = std::bitset<8>(n);
    cout << a << endl;
    cout << bitSet.to_string() << endl;
    cout << "----" << endl;
}

int main() {
    int res, k, n;

    scanf("%d %d",&k,&n);

    print("1 << k", 1 << k);
    print("1 << n", 1 << n);

    res = (1 << k) + (1 << n);
    printf("%d\n", res);

    return 0;
}