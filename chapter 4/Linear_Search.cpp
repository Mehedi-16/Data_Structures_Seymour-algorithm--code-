#include <iostream>
using namespace std;

int main()
{
    int N, ITEM, LOC = 0;

    cout << "Enter the number of elements: ";
    cin >> N;

    int DATA[N];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < N; i++)
    {
        cin >> DATA[i];
    }

    cout << "Enter the item to search for: ";
    cin >> ITEM;

    for (int i = 0; i < N; i++)
    {
        if (DATA[i] == ITEM)
        {
            LOC = i+1;
            break;
        }
    }

    if (LOC == 0)
    {
        cout << "Item not found." << endl;
    }
    else
    {
        cout << "Item found at position: " << LOC << endl;
    }

    return 0;
}
