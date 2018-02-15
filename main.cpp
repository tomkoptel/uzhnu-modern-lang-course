#include <iostream>

using namespace std;

/**
 * The source: https://www.e-olymp.com/ru/problems/919
 *
 * Input: 6 7.5 2.1 2.0 0 -3
 * Output: 1 2.10
 *
 * @return 0
 */
int main() {
    int size;
    cin >> size;

    auto *array = new float[size];
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    float sum = 0;
    int numberOfSeekItems = 0;
    for (int j = 2; j < size; j+= 3) {
        float element = array[j];
        if (element > 0) {
            sum += element;
            numberOfSeekItems++;
        }
    }

    printf("%d %.2f", numberOfSeekItems, sum);

    return 0;
}