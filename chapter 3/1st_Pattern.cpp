#include <iostream>
#include <string>

using namespace std;

int main()
{
    string T;
    string P;

    cout << "Enter the text (T): ";
    getline(cin, T);
    cout << "Enter the pattern (P): ";
    getline(cin, P);

    int T_length = T.length();
    int P_length = P.length();
    int count = 0; 
    int index = -1;

    for (int i = 0; i <= T_length - P_length; i++)
    {
        if (T.substr(i, P_length) == P)
        {
            index = i; 
            count++; 
            cout << "Pattern found at index: " << index << endl;
        }
    }

    if (count == 0)
    {
        cout << "Pattern not found." << endl;
    }
    else
    {
        cout << "Total occurrences of the pattern: " << count << endl;
    }

    return 0;
}
