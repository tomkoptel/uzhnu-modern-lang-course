#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int maxGcd(vector<int> array) {
    int maxVal = 0;
    if (!array.empty()) {
        for (int i = 0; i < array.size(); ++i) {
            for (int j = i + 1; j < array.size(); ++j) {
                int a = array[i];
                int b = array[j];
                int gcdResult = gcd(a, b);

                maxVal = max(maxVal, gcdResult);
                cout << "Comparing: " << a << " and " << b << " gcd is " << gcdResult << endl;
            }
        }
    }

    return maxVal;
}

/**
 *
 * Input:
 * 3
10 20 30 40
7 5 12
125 15 25
 *
 * Output:
 * 20 1 25
 *
 * @return 0
 */
int main() {
    int tries;
    cin >> tries;
    cin.get();

    auto *results = new int[tries];
    string tmp;

    for (int j = 0; j < tries; ++j) {
        getline(cin, tmp);
        vector<int> nums;
        stringstream ss(tmp);

        int num;
        while(ss >> num) {
            nums.push_back(num);
        }
        results[j] = maxGcd(nums);
    }

    for (int i = 0; i < tries; ++i) {
        cout << results[i] << endl;
    }
}