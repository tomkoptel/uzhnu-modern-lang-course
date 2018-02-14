#include <iostream>

using namespace std;

/**
 * The source: https://www.e-olymp.com/ru/problems/3735
 * Input: 11 Output: 5
 *
 * @return 0
 */
int main() {
    int n;
    cin >> n;

    int k = n % 6;
    cout << ((k == 0) ? 0 : k) << endl;

    return 0;
}