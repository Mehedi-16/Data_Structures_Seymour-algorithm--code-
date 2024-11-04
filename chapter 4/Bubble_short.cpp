#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter the number of elements: ";
    cin >> N;

    int DATA[N];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < N; i++) {
        cin >> DATA[i];
    }

//bubble short

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (DATA[j] > DATA[j + 1]) {
                int temp = DATA[j];
                DATA[j] = DATA[j + 1];         //swap
                DATA[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array:\n";
    for (int i = 0; i < N; i++) {
        cout << DATA[i] << " ";
    }
    cout << endl;

    return 0;
}
