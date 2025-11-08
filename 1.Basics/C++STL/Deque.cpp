#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Creating a deque of integers
    deque<int> dq;

    // push_back() – Adds element at the back
    dq.push_back(10);
    dq.push_back(20);

    // push_front() – Adds element at the front
    dq.push_front(5);
    dq.push_front(1);

    // emplace_back() and emplace_front() – Faster insertion
    dq.emplace_back(30);
    dq.emplace_front(0);

    // Printing deque
    cout << "Deque elements: ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    // Accessing front and back
    cout << "Front: " << dq.front() << ", Back: " << dq.back() << endl;

    // pop_back() – Removes last element
    dq.pop_back();

    // pop_front() – Removes first element
    dq.pop_front();

    cout << "After popping front and back: ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    // insert() at specific position using iterator
    deque<int>::iterator it = dq.begin();
    advance(it, 2); // Move to 3rd position
    dq.insert(it, 99);

    cout << "After inserting 99 at 3rd position: ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    // erase() at specific position
    it = dq.begin();
    advance(it, 1); // 2nd position
    dq.erase(it);

    cout << "After erasing 2nd element: ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    // size, empty, clear
    cout << "Size of deque: " << dq.size() << endl;
    cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << endl;

    // Access via index like array
    cout << "Element at index 2: " << dq[2] << endl;

    // clear the deque
    dq.clear();
    cout << "After clearing, is deque empty? " << (dq.empty() ? "Yes" : "No") << endl;

    return 0;
}
