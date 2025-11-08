#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Creating a queue of integers
    queue<int> q;

    // Pushing elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Front and Back
    cout << "Front element: " << q.front() << endl; // 10
    cout << "Back element: " << q.back() << endl;   // 30

    // Size of queue
    cout << "Size: " << q.size() << endl; // 3

    // Popping front element
    q.pop();
    cout << "\nAfter pop:" << endl;
    cout << "Front: " << q.front() << endl; // 20
    cout << "Size: " << q.size() << endl;   // 2

    // Checking if queue is empty
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    // Traversing the queue (not directly supported, so we copy it)
    cout << "\nTraversing the queue: ";
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}
