#include <iostream>
#include <utility> // for pair
using namespace std;

int main() {
    // 1. Basic pair
    pair<int, char> p1 = {1, 'A'};
    cout << "p1: " << p1.first << ", " << p1.second << endl;

    // 2. Using make_pair
    pair<string, float> p2 = make_pair("Pi", 3.14);
    cout << "p2: " << p2.first << ", " << p2.second << endl;

    // 3. Nested pair
    pair<int, pair<int, int>> p3 = {1, {2, 3}};
    cout << "p3: " << p3.first << ", " << p3.second.first << ", " << p3.second.second << endl;

    // 4. Swapping pairs
    pair<int, int> a = {10, 20}, b = {30, 40};
    a.swap(b);
    cout << "After swap, a: " << a.first << ", " << a.second << endl;

    // 5. Comparing pairs
    pair<int, int> x = {1, 2}, y = {1, 3};
    cout << "x < y? " << (x < y ? "Yes" : "No") << endl;

    return 0;
}
