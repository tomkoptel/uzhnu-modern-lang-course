#include <iostream>

using namespace std;

int main() {
    char c;
    int s = 0;

    while (scanf("%c", &c), c != '\n') {
        // We take number one by one and sum them. It is not stated clearly in the task that we need convert input numbers to sum up.
        // https://stackoverflow.com/questions/15598698/why-does-subtracting-0-in-c-result-in-the-number-that-the-char-is-representing
        s += c - '0';
    }

    printf(s % 3 == 0 ? "YES\n" : "NO\n");
    return 0;
}