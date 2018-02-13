#include <iostream>

using namespace std;

/**
 * The task https://www.e-olymp.com/ru/problems/2375
 * Types of rooms: "bedroom", "bathroom", "kitchen", "balcony", "other".
 *
 * Sample data:
 * 2 75123
 * 10 kitchen
 * 15 balcony
 *
 * @return 0
 */
int main() {
    int rooms;
    int pricePerSquare;

    scanf("%d", &rooms);
    scanf("%d", &pricePerSquare);

    int totalSquare = 0;
    int bedroomSquare = 0;
    int balconySquare = 0;
    for (int i = 0; i < rooms; ++i) {
        int roomSquare;
        char roomType[256];
        scanf("%d", &roomSquare);
        scanf("%s", roomType);
        string type(roomType);

        totalSquare += roomSquare;
        if (type == "bedroom") {
            bedroomSquare += roomSquare;
        }
        if (type == "balcony") {
            balconySquare += roomSquare;
        }
    }

    cout << totalSquare << endl;
    cout << bedroomSquare << endl;

    float simplifiedSquare = (float) totalSquare - ((float) balconySquare / 2);
    float theEndPrice = (float) pricePerSquare * simplifiedSquare;
    printf("%.6f", theEndPrice);

    return 0;
}