#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // ---------- map (sorted, unique keys) ----------
    map<string, int> m;
    m["a"] = 10;
    m.insert({"b", 20});
    
    cout << "Map:\n";
    for (auto &p : m) cout << p.first << " => " << p.second << "\n";

    // ---------- unordered_map (no order, unique keys) ----------
    unordered_map<string, int> um;
    um["x"] = 100;
    um.insert({"y", 200});

    cout << "\nUnordered Map:\n";
    for (auto &p : um) cout << p.first << " => " << p.second << "\n";

    // ---------- multimap (sorted, duplicate keys allowed) ----------
    multimap<string, int> mm;
    mm.insert({"id", 1});
    mm.insert({"id", 2});

    cout << "\nMultimap:\n";
    for (auto &p : mm) cout << p.first << " => " << p.second << "\n";

    return 0;
}

/*
📝 Quick Notes:
- map: sorted keys, no duplicates
- unordered_map: fast access, no key order
- multimap: sorted, allows duplicate keys

⛏️ Common Functions:
- insert({key, val})
- erase(key)
- find(key)
- count(key)
- size(), empty()
*/
