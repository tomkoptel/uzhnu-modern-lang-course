#include <iostream>

using namespace std;

/**
 * The issue: https://www.e-olymp.com/ru/contests/5553/problems/43464
 *
 * Input:
 * 4
 * Cardio
 * The double tap
 * Beware of bathrooms
 * Seatbelts
 * 5
 * 2
 * -10
 * 5
 * 1
 * 4
 *
 * Ouput:
 * Rule 2: The double tap
 * Rule -10: No such rule
 * Rule 5: No such rule
 * Rule 1: Cardio
 * Rule 4: Seatbelts
 *
 * @return 0
 */
int main() {
    int numberOfCitations = 4;
    cin >> numberOfCitations;
    /**
     * After the cin >> i; there is a newline character '\n' in the input buffer.
     * There are various ways to remove that character. cin.get(); will do the job.
     */
    cin.get();

    auto* citations = new string[numberOfCitations];
    for (int i = 0; i < numberOfCitations; ++i) {
        getline(cin, citations[i]);
    }

    int numberOfRules;
    cin >> numberOfRules;

    auto * rules = new int[numberOfRules];
    for (int j = 0; j < numberOfRules; ++j) {
        cin >> rules[j];
    }

    for (int k = 0; k < numberOfRules; ++k) {
        int rule = rules[k];
        int position = rule - 1;

        if (position < 0 || position > numberOfCitations - 1) {
            printf("Rule %d: No such rule\n", rule);
        } else {
            string citation = citations[position];
            printf("Rule %d: %s\n", rule, citation.c_str());
        }
    }
    
    return 0;
}