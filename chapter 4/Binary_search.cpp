#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number of elements:";
    cin >> n;
    int arr[n];
    cout << "elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "item: ";
    cin >> x;

    int low = 0, high = n - 1;
    int loc = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (x == arr[mid])
        {
            loc = mid;
            break;
        }
        if (x > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    // Display result
    if (loc == -1)
        cout << "Not found";
    else
        cout << "Element is found at index " << loc;

    return 0;
}
