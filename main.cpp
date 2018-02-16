#include <iostream>

using namespace std;

void print(int * array, int n);

void swap(int * array, int a, int b);

/**
 * Input: 9 2 5 6 9 Output: 1 5 4 3 2 9 8 7 6
 * Input: 9 3 6 5 8 Output: 1 2 6 5 8 7 3 4 9
 * @return
 */
int main() {
    int n, a, b, c, d;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);

    a--;
    b--;
    c--;
    d--;

    auto * array = new int[n];
    for (int i = 0; i < n; ++i) {
        array[i] = i + 1;
    }

    swap(array, a, b);
    swap(array, c, d);

    print(array, n);

    return 0;
}

void swap(int * array, int a, int b) {
    for (int k = 0; k < b - a; ++k) {
        for (int j = a; j < b - k; ++j) {
            int tmp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = tmp;
        }
    }
}

void print(int * array, int n) {
    for (int k = 0; k < n; ++k) {
        cout << array[k] << " ";
    }
}