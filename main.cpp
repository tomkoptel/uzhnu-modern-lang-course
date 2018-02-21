#include <iostream>

using namespace std;

/**
 * Explanation of function can be found here https://site.ada.edu.az/~medv/acm/Docs%20e-olimp/Volume%2016/1515.htm
 * and here https://www.youtube.com/watch?v=uCsD3ZGzMgE
 *
 * @param n number of people gonna participate in experiment
 * @return the number of surviver
 */
int w(int n) {
    if (n == 1) return 1;

    if (n % 2 == 0) {
        return 2 * w(n / 2) - 1;
    } else {
        return 2 * w((n - 1) / 2) + 1;
    }
}

int main() {
    int tests;
    cin >> tests;

    int test = 0;
    while (tests--) {
        int n, lastSurvived;
        cin >> n;

        int r = 0;
        // If the survived number 'lastSurvived' != 'n' we need repeat experiment with substitution of 'n' with lastSurvived
        while ((lastSurvived = w(n)) != n) {
            r++;
            n = lastSurvived;
        }

        printf("Case %d: %d %d\n", ++test, r, n);
    }
    return 0;
}