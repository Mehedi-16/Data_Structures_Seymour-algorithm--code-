#include <iostream>
using namespace std;

int main() {
    int LA[10] = {10, 20, 30, 40, 50};  // Array with initial elements
    int N = 5;  // Current number of elements
    int K = 2;  // Position to insert ITEM (0-based index)
    int ITEM = 25;  // Item to be inserted

    // Shift elements to the right
    for (int i = N; i >= K; i--) {
        LA[i] = LA[i - 1];  // Corrected indexing
    }

    LA[K] = ITEM;  // Insert the ITEM
    N++;  // Update the number of elements

    // Print the array after insertion
    for (int i = 0; i < N; i++) {
        cout << LA[i] << " ";
    }

    return 0;
}
