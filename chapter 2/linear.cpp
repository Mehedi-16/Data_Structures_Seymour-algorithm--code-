#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int value = 5;
    int pos = -1;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (value == arr[i]) {
            pos = i + 1;
            break;
        }
    }

    if (pos == -1) {
        cout << "not found" << endl;
    } else {
        cout << "found at position: " << pos << endl;
    }

    return 0;
}
