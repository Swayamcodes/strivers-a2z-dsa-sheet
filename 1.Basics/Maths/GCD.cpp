#include <bits/stdc++.h>
using namespace std;

/*
    Problem: GCD (Greatest Common Divisor)
    --------------------------------------
    Given two integers a and b, find their GCD using the Euclidean Algorithm.

    Definition:
      GCD of two numbers is the largest number that divides both a and b.

    Example:
      a = 20, b = 15  -> GCD = 5
      a = 9,  b = 6   -> GCD = 3

    --------------------------------------
    📌 Theory (Euclidean Algorithm)

      gcd(a, b) = gcd(b, a % b)
      Base case: gcd(a, 0) = a

      Explanation:
        If we divide a by b, remainder r has the same divisors
        as a and b. So we reduce the problem until remainder = 0.

    --------------------------------------
    📌 Time Complexity: O(log(min(a,b)))
    📌 Space Complexity: O(1) (iterative) or O(logN) (recursive)
*/

//--------------------------------------
// ✅ Iterative Euclidean Algorithm
//--------------------------------------
int gcd_iterative(int a, int b) {
    a = abs(a);
    b = abs(b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//--------------------------------------
// ✅ Recursive Euclidean Algorithm
//--------------------------------------
int gcd_recursive(int a, int b) {
    if (b == 0) return abs(a);
    return gcd_recursive(b, a % b);
}

//--------------------------------------
// 🧪 Driver Code
//--------------------------------------
int main() {
    vector<pair<int, int>> tests = {
        {20, 15}, {12, 18}, {7, 13}, {0, 25}, {81, 27}, {270, 192}
    };

    cout << left << setw(12) << "A" << setw(12) << "B"
         << setw(15) << "GCD (Iterative)" << setw(15) << "GCD (Recursive)" << endl;
    cout << string(50, '-') << endl;

    for (const auto &p : tests) {
        int a = p.first;
        int b = p.second;
        cout << left << setw(12) << a << setw(12) << b
             << setw(15) << gcd_iterative(a, b)
             << setw(15) << gcd_recursive(a, b)
             << endl;
    }
    return 0;
}

/*
--------------------------------------
🧠 Dry Run Example: a = 20, b = 15
--------------------------------------
Step 1: a=20, b=15 → a%b=5 → a=15, b=5
Step 2: a=15, b=5  → a%b=0 → a=5, b=0
Loop ends → GCD = 5 ✅
--------------------------------------
*/