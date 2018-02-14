#include <iostream>

using namespace std;

/**
 * The source: https://www.e-olymp.com/ru/problems/6827
 *
 * @return 0
 */
int main() {
    string doctorsPhrase;
    string johnsPhrase;

    cin >> doctorsPhrase;
    cin >> johnsPhrase;

    if (johnsPhrase.length() > doctorsPhrase.length()) {
        cout << "no" << endl;
    } else {
        cout << "go" << endl;
    }

    return 0;
}