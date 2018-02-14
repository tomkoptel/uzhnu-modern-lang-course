#include <iostream>
#include <algorithm>

using namespace std;

/**
 * The source https://www.e-olymp.com/ru/contests/5553/problems/43470
 *
 * Input: kpkk Output: 2
 *
 * @return 0
 */
int main() {
    string input;
    cin >> input;
    int longestCombination = 0, tmp = 0;

    for (char character: input) {
        if (character == 'k') {
            tmp++;
        } else {
            longestCombination = max(longestCombination, tmp);
            tmp = 0;
        }
    }
    // The string might end up with series of 'k' as result the breaking condition will not be met and we will miss the potential longest combination in the end.
    longestCombination = max(longestCombination, tmp);

    cout << longestCombination << endl;
    
    return 0;
}