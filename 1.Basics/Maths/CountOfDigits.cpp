#include <bits/stdc++.h>
using namespace std;

/*
    Problem: Count of Digits in a Number
    -----------------------------------
    Given an integer N, find the number of digits it contains.

    Example:
      Input:  N = 12345
      Output: 5

      Input:  N = 7
      Output: 1

    -----------------------------------
    📌 Approach 1: Iterative Division
      - Keep dividing the number by 10 until it becomes 0.
      - Count how many times we can divide.
      - Works for both positive and negative numbers.

      Time Complexity: O(log10(N))  (each division removes one digit)
      Space Complexity: O(1)

    -----------------------------------
    📌 Approach 2: Using Logarithm (faster)
      - Number of digits = floor(log10(N)) + 1
      - But only valid when N > 0.

      Example: log10(12345) = 4.091 → floor(4.091) + 1 = 5
*/

// -----------------------------------
// ✅ Iterative Approach
// -----------------------------------
int countDigits_iterative(int n) {
    if (n == 0) return 1; // special case: 0 has 1 digit

    n = abs(n); // handle negative numbers
    int count = 0;
    while (n > 0) {
        n = n / 10; // remove last digit
        count++;
    }
    return count;
}

// -----------------------------------
// ✅ Logarithmic Approach
// -----------------------------------
int countDigits_logarithmic(int n) {
    if (n == 0) return 1; // log(0) is undefined
    n = abs(n);
    return floor(log10(n)) + 1;
}

// -----------------------------------
// 🧪 Main Function (Testing)
// -----------------------------------
int main() {
    vector<int> tests = {0, 7, 42, 999, 12345, -12345};

    cout << "Count of Digits (Iterative):\n";
    for (int x : tests) {
        cout << "N = " << x << " -> " << countDigits_iterative(x) << " digits" << endl;
    }

    cout << "\nCount of Digits (Logarithmic):\n";
    for (int x : tests) {
        cout << "N = " << x << " -> " << countDigits_logarithmic(x) << " digits" << endl;
    }

    return 0;
}

/*
-----------------------------------
🧠 Dry Run Example: N = 1234
-----------------------------------
Iterative:
  n=1234 → count=0
  n=123 → count=1
  n=12  → count=2
  n=1   → count=3
  n=0   → count=4
Output: 4

Logarithmic:
  log10(1234) = 3.091 → floor(3.091)+1 = 4
Output: 4
-----------------------------------
*/
