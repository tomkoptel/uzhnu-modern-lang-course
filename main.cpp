#include <iostream>

using namespace std;

void print(int * array, int n) {
    for (int k = 0; k < n; ++k) {
        cout << array[k] << " ";
    }
}

/**
 * The source: https://www.e-olymp.com/ru/contests/5554/problems/43480
 *
 * In: 5 1 3 3 3 4 Out: 1 3 3 3 1
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

    int min = array[0];
    int max = array[0];
    for (int j = 0; j < size; ++j) {
        int el = array[j];
        if (el < min) {
            min = el;
        }
        if (el > max) {
            max = el;
        }
    }

    for (int k = 0; k < size; ++k) {
        int el = array[k];
        if (el == max) {
            array[k] = min;
        }
    }

    print(array, size);

    return 0;
}