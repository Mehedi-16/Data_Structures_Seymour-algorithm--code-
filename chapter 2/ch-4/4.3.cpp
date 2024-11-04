#include <iostream>
using namespace std;

int main() {
    int LA[10] = {10, 20, 30, 40, 50};  // Array with initial elements
    int N = 5;  // Current number of elements
    int K = 3;  // Position of the element to delete (1-based index)

    // Shift elements to the left to delete the Kth element
    for (int i = K; i < N - 1; i++) {
        LA[i] = LA[i + 1];
    }

    N--;  // Decrement the number of elements

    // Print the array after deletion
    for (int i = 0; i < N; i++) {
        cout << LA[i] << " ";
    }

    return 0;
}
