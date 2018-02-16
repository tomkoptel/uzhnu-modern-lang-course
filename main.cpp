#include <iostream>

using namespace std;

/**
 * The source: https://www.e-olymp.com/ru/contests/5554/problems/43476
 *
 * Input: 1 2 3 4
 * Output: 5
 *
 * @return 0
 */
int main() {
    int size;
    cin >> size;

    auto *array = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    int min = array[0];
    int max = array[0];
    for (int j = 0; j < size; ++j) {
        int currentElement = array[j];
        if (currentElement < min) {
            min = currentElement;
        }
        if (currentElement > max) {
            max = currentElement;
        }
    }

    cout << min + max << endl;


    return 0;
}