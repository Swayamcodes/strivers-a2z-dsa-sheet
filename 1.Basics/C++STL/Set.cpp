#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    // --------- set (sorted, unique) ---------
    set<int> s = {10, 20, 30, 40};

    s.insert(25);
    s.emplace(35);

    cout << "Set:\n";
    for (int x : s) cout << x << " ";

    // Count, Erase, Find
    cout << "\nCount 20: " << s.count(20);
    s.erase(25);
    if (s.find(10) != s.end()) cout << "\n10 found";

    // Lower and Upper Bound
    cout << "\nLower bound of 22: " << *s.lower_bound(22); // first >= 22
    cout << "\nUpper bound of 30: " << *s.upper_bound(30); // first > 30

    // Size and Empty
    cout << "\nSize: " << s.size();
    cout << "\nEmpty: " << s.empty() << "\n";

    // --------- unordered_set (unique, no order) ---------
    unordered_set<int> us = {1, 2, 3};
    us.insert(4);

    cout << "\nUnordered Set:\n";
    for (int x : us) cout << x << " ";
    cout << "\nFind 2: " << (us.find(2) != us.end());

    // --------- multiset (sorted, allows duplicates) ---------
    multiset<int> ms = {10, 10, 20, 30};

    ms.insert(20); // now 2 copies of 10 and 2 of 20
    ms.emplace(25);

    cout << "\n\nMultiset:\n";
    for (int x : ms) cout << x << " ";

    cout << "\nCount of 10: " << ms.count(10);

    // Lower/Upper Bound for multiset
    cout << "\nLower bound of 10: " << *ms.lower_bound(10);
    cout << "\nUpper bound of 20: " << *ms.upper_bound(20);

    return 0;
}

/*
📝 Quick Notes:
- set: unique, sorted
- unordered_set: unique, fast, no order
- multiset: allows duplicates, sorted

🔧 Common Functions:
- insert(x), emplace(x)
- count(x): how many times x appears
- erase(x): removes all occurrences of x
- find(x): returns iterator to x
- size(), empty()

🔍 Only in set/multiset:
- lower_bound(x): first element >= x
- upper_bound(x): first element > x
*/
