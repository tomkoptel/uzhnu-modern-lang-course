#include <iostream>

using namespace std;

int main() {
    char character;
    int result = 0, a = 0;
    scanf("%d", &result);

    while (scanf("%c", &character), character != '\n') {
        scanf("%d", &a);
        if (character == '+') {
            result += a;
        } else {
            result -= a;
        }
    }

    cout << result << endl;

    return 0;
}