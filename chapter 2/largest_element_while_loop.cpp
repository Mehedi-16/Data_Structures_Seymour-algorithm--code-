#include <iostream>
using namespace std;

int main() {
    int arr[] = {101, 45, 67, 100, 89, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int largest = arr[0]; //dhore nilam

    while (i < n) //loop i er man ,size er shate compare korbe
    { 
        if (arr[i] > largest) 
        {
            largest = arr[i];
        }
        i++;
    }

    cout << "Largest element: " << largest << endl;

    return 0;
}
