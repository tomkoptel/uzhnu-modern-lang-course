#include <iostream>

using namespace std;

long fun10(long m, long n) {
    if (m == 0 || m == n) return 1;
    return fun10(m - 1, n - 1) + fun10(m, n - 1);
}


int main() {
    long n, m;
    cin >> n >> m;
    cout << fun10(m, n) << endl;
    return 0;
}