#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> marks; // Declare map

    // Inserting values
    marks["Alice"] = 90;
    marks.insert({"Bob", 85});

    // Accessing and checking
    cout << "Alice's marks: " << marks["Alice"] << "\n";

    // Using count to check presence
    if (marks.count("Bob") > 0)
        cout << "'Bob' exists in map\n";
    else
        cout << "'Bob' does not exist\n";

    // Find and erase
    if (marks.find("Charlie") == marks.end())
        cout << "'Charlie' not found\n";
    marks["Charlie"] = 75;
    marks.erase("Charlie");

    // Size and empty
    cout << "Size: " << marks.size() << "\n";
    cout << (marks.empty() ? "Map is empty" : "Map is not empty") << "\n";

    // Traversing
    cout << "\nMap contents:\n";
    for (auto p : marks) {
        cout << p.first << " => " << p.second << "\n";
    }

    return 0;
}

/*
Short Notes:
- insert(): Adds key–value
- count(): Checks key presence
- erase(): Removes key
- find(): Returns iterator
- size(): Total pairs
- empty(): Checks if empty
*/
