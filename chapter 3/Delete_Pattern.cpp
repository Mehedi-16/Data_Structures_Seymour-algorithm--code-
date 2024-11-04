#include <iostream>
#include <string>

using namespace std;

int main() {
    string T = "abcdefgabcMMabcMabdefghabc"; // Original text
    string P = "M"; // Pattern to remove

    size_t K = T.find(P); // Find the first occurrence of P

    while (K != string::npos) { // Repeat while P is found
        T.erase(K, P.length()); // Delete P from T
        K = T.find(P, K); // Update K to find the next occurrence of P
    }

    cout << "Resulting text: " << T << endl; // Output the modified text

    return 0;
}
