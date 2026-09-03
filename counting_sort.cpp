#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // Create a frequency array of size 26.
    // Each index represents one lowercase English letter.
    int frq[26] = {0};

    // Count the frequency of each character in the string.
    // c - 'a' converts the character into an array index from 0 to 25.
    for (char c : s)
    {
        frq[c - 'a']++;
    }

    // Traverse from 'a' to 'z'.
    // Print each character according to its frequency.
    for (char i = 'a'; i <= 'z'; i++)
    {
        // Print the character as many times as it appears in the string.
        for (int j = 0; j < frq[i - 'a']; j++)
        {
            cout << i;
        }
    }

    return 0;
}