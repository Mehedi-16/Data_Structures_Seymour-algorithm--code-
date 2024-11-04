#include <iostream>
#include <string>

using namespace std;

int main() {
    string T = "abcdefgabcabcabdefghabc"; // Original text
    string P = "abc"; // Pattern to replace
    string Q = "XYZ"; // Replacement string

    size_t K = T.find(P); // Find the first occurrence of P

    while (K != string::npos) { // Repeat while P is found
        T.replace(K, P.length(), Q); // Replace P with Q
        K = T.find(P, K + Q.length()); // Update K to find the next occurrence
    }

    cout << "Resulting text: " << T << endl; // Output the modified text

    return 0;
}
