#include <iostream>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    int revVctr[8];               // User values
    int revVctr1[8];
    int i;                        // Loop index

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr[i];
    }

    // Reverse
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        revVctr1[i] = revVctr[NUM_ELEMENTS - 1 - i]; // Swap
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr1[i];
    }
    cout << endl;

    return 0;
}