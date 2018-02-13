#include <iostream>

using namespace std;

/**
 * The issue: https://www.e-olymp.com/ru/contests/5553/problems/43464
 * Input: 123118 1 5 Output: 523558
 *
 * @return 0
 */
int main() {
    int number, a, b;
    scanf("%d %d %d", &number, &a, &b);

    string numberAsString = to_string(number);
    string aAsString = to_string(a);
    string bAsString = to_string(b);

    while (numberAsString.find(aAsString) != string::npos) {
        numberAsString.replace(numberAsString.find(aAsString), aAsString.length(), bAsString);
    }

    cout << numberAsString << endl;

    return 0;
}