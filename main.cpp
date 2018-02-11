#include <iostream>

using namespace std;

/**
 * Source of the task https://www.e-olymp.com/en/contests/5553/problems/43458
 *
 * Input: --S--S--S--S--    Output: 2
 * Input: ---B--S-D--S--    Output: 4
 * Input: DDBDDBDDBDD       Output: 0
 *
 * Origin of solution from https://github.com/memo735/e-olymp/blob/master/0000-0999/0504%20-%20Parking%20-%20Парковка%20-%20Maşın%20saxlama%20-%20Паркування.cpp
 * @return 0
 */
int main() {
    int numberOfTries;
    cin >> numberOfTries;

    while (numberOfTries--) {
        string input;
        cin >> input;

        auto numberOfParkings = 0;
        for (int i = 0; i < input.length(); ++i) {
            bool isParkingSlot = input[i] == '-';
            bool busStopAhead = input[i + 1] == 'B' || input[i + 2] == 'B';
            bool pedestrianPassNear = input[i + 1] == 'S' || input[i - 1] == 'S';

            if (isParkingSlot && !busStopAhead && !pedestrianPassNear) {
                numberOfParkings++;
            }
        }

        cout << numberOfParkings << endl;
    }

    return 0;
}