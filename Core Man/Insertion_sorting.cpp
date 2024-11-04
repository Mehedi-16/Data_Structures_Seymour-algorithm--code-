#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) 
    cin >> arr[i]; 

    // Insertion Sort
    for (int i = 1; i < n; i++) {       // i=======1 থেকে শুরু 
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift element to the right
            j--;
        }
        arr[j + 1] = key; // Insert the key at its correct position
    }

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) 
    cout << arr[i] << " "; // Output sorted array
    cout << endl;

    return 0;
}
