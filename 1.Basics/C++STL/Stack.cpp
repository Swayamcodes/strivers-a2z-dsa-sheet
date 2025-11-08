#include <iostream>
#include <stack>  // Include the stack header
using namespace std;

int main() {
    // Declare a stack of integers
    stack<int> s;

    // ----- PUSH -----
    s.push(10);
    s.push(20);
    s.push(30);  // Top of the stack is now 30

    // ----- TOP -----
    cout << "Top element: " << s.top() << endl; // 30

    // ----- POP -----
    s.pop(); // Removes 30
    cout << "Top after pop: " << s.top() << endl; // 20

    // ----- SIZE -----
    cout << "Stack size: " << s.size() << endl; // 2

    // ----- EMPTY -----
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl; // No

    // ----- Traverse Stack (by popping) -----
    cout << "\nTraversing Stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\nIs stack empty now? " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}
