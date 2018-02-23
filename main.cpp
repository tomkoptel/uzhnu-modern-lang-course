#include <iostream>

using namespace std;

int main() {
    unsigned int n, m;
    cin >> n >> m;

    int result = (1 << n) + (1 << m);
    printf("%d\n", result);

    return 0;
}