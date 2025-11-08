#include <iostream>
#include <vector>
#include <algorithm> // for sort, reverse, stable_sort
using namespace std;

// Custom comparator for descending
bool desc(int a, int b) {
    return a > b;
}

// Custom comparator for sorting pairs by second value
bool cmpBySecond(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    vector<int> v = {5, 2, 9, 1, 5, 6};

    // --------- Basic sort (ascending) ---------
    sort(v.begin(), v.end());
    cout << "Ascending sort:\n";
    for (int x : v) cout << x << " ";

    // --------- Sort in descending using comparator ---------
    sort(v.begin(), v.end(), desc);
    cout << "\nDescending sort:\n";
    for (int x : v) cout << x << " ";

    // --------- Using greater<int>() ---------
    sort(v.begin(), v.end(), greater<int>());
    cout << "\nDescending using greater<>:\n";
    for (int x : v) cout << x << " ";

    // --------- stable_sort (maintains relative order) ---------
    vector<int> same = {4, 2, 4, 3, 2};
    stable_sort(same.begin(), same.end());
    cout << "\nStable sort:\n";
    for (int x : same) cout << x << " ";

    // --------- reverse ---------
    reverse(v.begin(), v.end());
    cout << "\nReversed:\n";
    for (int x : v) cout << x << " ";

    // --------- Sorting a vector of pairs ---------
    vector<pair<int, int>> vp = {{1, 5}, {2, 3}, {1, 2}};
    sort(vp.begin(), vp.end()); // Default: by first, then second
    cout << "\nSorted pairs (by first, then second):\n";
    for (auto p : vp) cout << "(" << p.first << "," << p.second << ") ";

    // Sort by second element
    sort(vp.begin(), vp.end(), cmpBySecond);
    cout << "\nSorted by second element:\n";
    for (auto p : vp) cout << "(" << p.first << "," << p.second << ") ";

    return 0;
}

/*
📝 Quick Sorting Notes:
- sort(v.begin(), v.end()) → ascending
- sort(v.begin(), v.end(), greater<>()) → descending
- sort(v.begin(), v.end(), comparator) → custom
- stable_sort() → maintains relative order
- reverse() → reverses vector
- sort(vp.begin(), vp.end()) → sorts pairs by first, then second
*/
