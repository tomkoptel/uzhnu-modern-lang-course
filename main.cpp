#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;

    auto *array = new float[size];
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    float sum = 0;
    int numberOfSeekItems = 0;
    for (int j = 0; j < size; ++j) {
        float element = array[j];
        if (element < 0) {
            sum += element;
            numberOfSeekItems++;
        }
    }

    printf("%d %.2f", numberOfSeekItems, sum);

    return 0;
}