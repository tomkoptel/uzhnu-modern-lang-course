#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    string tmp;
    getline(cin, tmp);
    vector<int> nums;
    stringstream ss(tmp);

    int num;
    while (ss >> num) {
        nums.push_back(num);
    }

    int a = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        int b = nums[i];
        a = gcd(min(a, b), max(a, b));
    }
    cout << a << endl;

    return 0;
}