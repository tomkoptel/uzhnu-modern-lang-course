#include <iostream>

using namespace std;

/**
 * The source: https://www.e-olymp.com/ru/submissions/submit?problem=927
 *
 * Input:
 * 2 100.00
 * 5 23.00
 * 10 22.50
 *
 * Output: 15
 *
 * @return 0
 */
int main() {
    int num;
    cin >> num;

    int total = 0;
    for (int i = 0; i < num; ++i) {
        int numOfToys;
        float price;
        scanf("%d %f", &numOfToys, &price);

        if (price < 50) {
            total += numOfToys;
        }
    }

    cout << total << endl;

    return 0;
}