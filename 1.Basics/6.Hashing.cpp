#include <bits/stdc++.h>
using namespace std;

// -----------------------------------------------------------------------------
// OPTIONAL: Simple O(n) linear search function to count occurrences 
// (NOT used because hashing is faster)
// -----------------------------------------------------------------------------
// int count_occurrences(int n, int arr[], int target)
// {
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == target)
//             cnt++;
//     }
//     return cnt;
// }

int main()
{
    // -------------------------------------------------------------------------
    // Example 1 (commented): 
    // Hashing using array for values 0 to 12 (frequency count)
    // -------------------------------------------------------------------------
    /*
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // PRECOMPUTE frequency of numbers
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    int targetQueries;
    cin >> targetQueries;

    while (targetQueries--)
    {
        int number;
        cin >> number;

        // FETCH frequency
        cout << hash[number] << endl;
    }
    */
    // -------------------------------------------------------------------------
    // Example 2 (commented)
    // Hash the frequency of characters A-Z using array hashing
    // -------------------------------------------------------------------------
    /*
    string s;
    cin >> s;

    // Precompute frequency of each character
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
        hash[s[i] - 'A']++;

    int q;
    cin >> q;

    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c - 'A'] << endl;
    }
    */

    // -------------------------------------------------------------------------
    // CURRENT PROGRAM: HASHING USING unordered_map (BEST + FLEXIBLE)
    // Handles ANY integer range without size issues
    // -------------------------------------------------------------------------

    int n;
    cin >> n;

    // Input the array
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // ------------------------------
    // PRECOMPUTE using unordered_map
    // mpp[value] = frequency
    // ------------------------------
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
        mpp[arr[i]]++;  // increase count for arr[i]

    // ------------------------------
    // Show how the map stored values 
    // (unordered_map does NOT store in sorted order)
    // Useful to visualize the hash table
    // ------------------------------
    cout << "\nStored Frequencies:\n";
    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    // ------------------------------
    // Answer Queries
    // User asks: how many times does num occur in the array?
    // ------------------------------
    int q;
    cin >> q;

    while (q--)
    {
        int num;
        cin >> num;

        // FETCH frequency in O(1) average time
        cout << mpp[num] << endl;
    }

    return 0;
}
