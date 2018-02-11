#include <iostream>

using namespace std;

/**
 * The task https://www.e-olymp.com/uk/contests/5553/problems/43468
 *
 * Input: ((())())
 * Output: YES
 *
 * Input: (()
 * Output: NO
 *
 * @return 0
 */
int main() {
    string input;
    cin >> input;

    int x = 0;
    for (char i : input) {
        if (i == ')') {
            x--;
            if (x < 0) {
                cout << "NO" << endl;
                return 0;
            }
        } else {
            x++;
        }
    }

    if (x == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}