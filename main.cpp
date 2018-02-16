#include <iostream>

using namespace std;

/**
 * The source: https://www.e-olymp.com/ru/contests/5554/problems/43482
 *
 * @return
 */
int main() {
    int size;

    while (scanf("%d", &size) == 1) {
        auto *array = new int[size];
        for (int i = 0; i < size; ++i) {
            scanf("%d", &array[i]);
        }

        int a, b;
        scanf("%d %d", &a, &b);

        int counter = 0;
        for (int k = 0; k < size; ++k) {
            int el = array[k];
            if (el >= a && el <= b) {
                counter++;
            }
        }

        cout << counter << endl;
    }
    return 0;
}