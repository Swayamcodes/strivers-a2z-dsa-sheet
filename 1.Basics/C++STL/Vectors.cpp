// File: vector_stl_basics.cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 1. Declaration of vector
    vector<int> v; // creates an empty vector of integers

    // 2. Adding elements to vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // 3. Accessing elements
    cout << "Element at index 0 (v[0]): " << v[0] << endl;
    cout << "Element at index 1 (v.at(1)): " << v.at(1) << endl;

    // 4. Getting size and capacity
    cout << "Size of vector: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;

    // 5. Removing last element
    v.pop_back(); // removes 30
    cout << "After pop_back, size: " << v.size() << ", last element: " << v.back() << endl;

    // 6. Accessing front and back
    cout << "Front: " << v.front() << ", Back: " << v.back() << endl;

    // 7. Traversing vector (method 1: using index)
    cout << "\nTraversing using index: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // 8. Traversing vector (method 2: range-based for loop)
    cout << "\nTraversing using range-based for: ";
    for (int val : v) {
        cout << val << " ";
    }

    // 9. Traversing vector (method 3: iterator)
    cout << "\nTraversing using iterator: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); ++it) {
        cout << *(it) << " ";
    }

    // 10. Check if vector is empty
    cout << "\nIs vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    // 11. Clear vector
    v.clear();
    cout << "After clear(), size: " << v.size() << ", Is empty? " << (v.empty() ? "Yes" : "No") << endl;

    // 12. Initializing a vector with fixed size and value
    vector<int> a(5);        // 5 elements, default value 0
    vector<int> b(5, 2);     // 5 elements, all initialized to 2

    cout << "\nVector a (default 0): ";
    for (int x : a) cout << x << " ";

    cout << "\nVector b (all 2s): ";
    for (int x : b) cout << x << " ";

    // 13. Copying a vector
    vector<int> c = b; // copy constructor
    cout << "\nCopied vector c from b: ";
    for (int x : c) cout << x << " ";

    // 14. Creating a 2D vector (3 rows × 4 cols) initialized to 0
    vector<vector<int>> matrix(3, vector<int>(4, 0));

    cout << "\n\n2D vector (3x4 matrix):\n";
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //14


    v.emplace_back(20);  // behaves just like push_back for ints
    vec.erase(position);               // removes one element
    vec.erase(start, end);             // removes a range [start, end)

    vec.insert(position, value);              // inserts one value
    vec.insert(position, count, value);       // inserts value 'count' times
    vec.insert(position, anotherVec.begin(), anotherVec.end()); // inserts a range



    return 0;
}
