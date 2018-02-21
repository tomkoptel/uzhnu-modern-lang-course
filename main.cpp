#include <iostream>

using namespace std;

/**
 * Solution taken from https://site.ada.edu.az/~medv/acm/Docs%20e-olimp/Volume%2025/2415.htm
 *
 * @return 0
 */
int main() {
    long n;
    cin >> n;

    long position = 0;
    while ((n & 1) == 0) {
        n /= 2;
        position++;
    }

    cout << position << endl;
    return 0;
}