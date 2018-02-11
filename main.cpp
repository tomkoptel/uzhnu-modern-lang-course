#include <iostream>

using namespace std;

/**
 * The source of task https://www.e-olymp.com/uk/contests/5553/problems/43457
 *
 * Input: RRSRRLRR
 * Output: 6
 *
 * @return 0
 */
int main() {
    int min = 10000, max = 10000, x = 10000;
    string input;
    cin >> input;

    for (char i : input) {
        if (i == 'L') {
            x--;
            if (x < min) {
                min = x;
            }
        } else if (i == 'R') {
            x++;
            if (x > max) {
                max = x;
            }
        }
    }

    cout << max - min + 1 << endl;

    return 0;
}