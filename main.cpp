#include <iostream>

using namespace std;

/**
 * The issue: https://www.e-olymp.com/ru/contests/5553/problems/43463
 *
 * Input: russ(ai)(edocn)cup Output: russiancodecup
 *
 * @return 0
 */
int main() {
    string input;
    cin >> input;

    unsigned long openBracket = input.find_first_of('(');
    unsigned long closeBracket = input.find_first_of(')');
    while (openBracket != string::npos) {
        unsigned long wordLength = (closeBracket - openBracket) - 1;
        string reversedString = input.substr(openBracket + 1, wordLength);
        string fixedWord = "";
        for (long j = wordLength - 1; j >= 0; j--) {
            fixedWord += reversedString[j];
        }
        input.replace(openBracket, wordLength + 2, fixedWord);

        openBracket = input.find_first_of('(');
        closeBracket = input.find_first_of(')');
    }

    cout << input << endl;

    return 0;
}