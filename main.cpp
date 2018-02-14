#include <iostream>

using namespace std;

/**
 * The source https://www.e-olymp.com/ru/problems/462
 *
 * Input:
 * 5
 * 1 50 3 4 3
 * 16
 * 1 2 3 4 5 1 3 3 4 5 5 5 5 5 4 5
 *
 * Output:
 * yes
 * no
 * no
 * no
 * yes
 *
 * @return 0
 */
int main() {
    int numberOfKeys, totalNumberOfPresses;
    cin >> numberOfKeys;

    auto * numberOfPresses = new int[numberOfKeys];
    for (int i = 0; i < numberOfKeys; ++i) {
        cin >> numberOfPresses[i];
    }
    cin >> totalNumberOfPresses;
    auto * keysPressed = new int[totalNumberOfPresses];
    for (int i = 0; i < totalNumberOfPresses; ++i) {
        cin >> keysPressed[i];
    }

    auto * recordingSequence = new int[numberOfKeys];
    for (int j = 0; j < totalNumberOfPresses; ++j) {
        recordingSequence[keysPressed[j] - 1]++;
    }

    for (int k = 0; k < numberOfKeys; ++k) {
        int canBePressed = numberOfPresses[k];
        int wasPressed = recordingSequence[k];

        cout << ((wasPressed > canBePressed) ? "yes" : "no") << endl;
    }

    return 0;
}