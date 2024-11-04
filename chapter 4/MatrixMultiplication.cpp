#include <iostream>
using namespace std;

int main() {
    int size; 

    cout << "Enter the size of the square matrices: ";
    cin >> size;

    int A[10][10], B[10][10], C[10][10];

    // Input elements for matrix A
    cout << "Enter elements of matrix A:\n";
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> A[i][j];


    cout << "Enter elements of matrix B:\n";
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> B[i][j];

    // Matrix multiplication logic
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            C[i][j] = 0; 
            for (int k = 0; k < size; k++) {
                C[i][j] += A[i][k] * B[k][j]; // Multiply and accumulate
            }
        }
    }

    // Output the resultant matrix C
    cout << "Resultant matrix C:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
