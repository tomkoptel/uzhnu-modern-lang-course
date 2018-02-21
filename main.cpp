#include <iostream>

using namespace std;

void hanoi(long n, long from, long to, long additional) {
    if (n == 0) return;

    hanoi(n - 1, from, additional, to);
    cout << from << " " << to << endl;
    hanoi(n - 1, additional, to, from);
}

int main() {
    long n;
    cin >> n;
    hanoi(n, 1, 2, 3);
    return 0;
}