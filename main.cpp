#include <iostream>

using namespace std;

/**
 * The source: https://www.e-olymp.com/ru/problems/922
 *
 * Input: 1 2 3 4
 * Output: 4 1 2 3
 *
 * @return 0
 */
int main() {
    int size;
    cin >> size;

    auto *array = new int[size];
    auto *newArray = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    for (int j = 0; j < size; ++j) {
        int currentElement = array[j];
        int moveToIndex = (j + 1 == size) ? 0 : j + 1;
        newArray[moveToIndex] = currentElement;
    }

    for (int k = 0; k < size; ++k) {
        cout << newArray[k] << " ";
    }


    return 0;
}