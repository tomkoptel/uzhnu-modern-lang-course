#include <iostream>

using namespace std;

/**
 * Source https://www.e-olymp.com/uk/contests/5553/problems/43461
 *
 * Input: XPSE, 1 Output: WORD
 * Input: ZABC, 3 Output: WXYZ
 *
 * Helping reference http://www.asciitable.com
 * Solution in C# https://github.com/memo735/e-olymp/blob/master/2000-2999/Problem2164_C%23
 *
 * @return
 */
int main() {
    string input;
    cin >> input;

    int shift;
    cin >> shift;

    string result = "";
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (char character: input) {
        unsigned long position = alphabet.find(character);
        long newPosition =  position - shift;
        if (newPosition < 0) {
            newPosition = newPosition + alphabet.length();
        }
        result += alphabet[newPosition];
    }

    cout << result << endl;

    return 0;
}