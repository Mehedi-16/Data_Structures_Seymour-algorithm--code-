#include <iostream>
using namespace std;

void towersofhanoi(int n, char source, char aux, char destination)
{
    if (n == 1)
    {
        cout << "Move disk from: " << source << " to " << destination << endl;
        return;       //mone rakhte hobe 
    }

    towersofhanoi(n - 1, source, destination, aux);                        // Move n-1 disks from source to aux
    cout << "Move disk from: " << source << " to " << destination << endl; // Move the nth disk
    towersofhanoi(n - 1, aux, source, destination);                        // Move n-1 disks from aux to destination
}

int main()
{
    int n = 4; // Number of disks
    towersofhanoi(n, 'A', 'B', 'C');
    return 0;
}
