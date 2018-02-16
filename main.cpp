#include <iostream>

using namespace std;

/**
 * The source: https://www.e-olymp.com/ru/contests/5554/problems/43481
 *
 * In: 10 20 30 40 Out: 2
 * In: 40 50 55 60 55 54 70 88 49 77 Out: 4
 *
 * @return
 */
int main() {
    int size;
    cin >> size;

    auto *array = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    double average = 0;
    for (int j = 0; j < size; ++j) {
        average += array[j];
    }

    average /= size;

    int counter = 0;
    for (int k = 0; k < size; ++k) {
        int el = array[k];
        if (el > average) {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}