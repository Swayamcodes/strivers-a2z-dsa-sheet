#include <iostream>
#include <list>
using namespace std;

int main() {
    // Declare a list of integers
    list<int> lst;

    // Add elements at the back
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);

    // Add elements at the front
    lst.push_front(5);
    lst.push_front(1);

    cout << "List after push_front and push_back: ";
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Remove last and first elements
    lst.pop_back();   // removes 30
    lst.pop_front();  // removes 1

    cout << "After pop_back and pop_front: ";
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Insert element at 2nd position (after first element)
    list<int>::iterator it = lst.begin();
    ++it; // move to 2nd position
    lst.insert(it, 15); // inserts 15 before 2nd element

    cout << "After inserting 15 at 2nd position: ";
    for (int val : lst) cout << val << " ";
    cout << endl;

    // Erase 2nd element (which is 15)
    it = lst.begin();
    ++it;
    lst.erase(it);

    cout << "After erasing 2nd element: ";
    for (int val : lst) cout << val << " ";
    cout << endl;

    // Add some duplicate/unsorted elements
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(5);

    // Sort the list
    lst.sort();

    cout << "After sorting: ";
    for (int val : lst) cout << val << " ";
    cout << endl;

    // Reverse the list
    lst.reverse();

    cout << "After reversing: ";
    for (int val : lst) cout << val << " ";
    cout << endl;

    // Remove all occurrences of 10
    lst.remove(10);

    cout << "After removing all 10s: ";
    for (int val : lst) cout << val << " ";
    cout << endl;

    return 0;
}
