#include <bits/stdc++.h>
using namespace std;

/*
    Problem: Reverse a Number
    -------------------------
    Given an integer N, reverse its digits.

    Example:
      Input:  N = 1234
      Output: 4321

      Input:  N = -123
      Output: -321

    -----------------------------------
    📌 Approach: Mathematical Reversal
      - Initialize reversed = 0
      - Repeatedly extract last digit using (n % 10)
      - Append it to reversed number (reversed = reversed * 10 + digit)
      - Divide n by 10 to remove last digit.

      Time Complexity: O(log10(N))
      Space Complexity: O(1)

    ✅ Works for both positive and negative numbers.
*/

int reverseNumber(int n) {
    bool isNegative = (n < 0);
    n = abs(n); // handle negative

    long long reversed = 0; // use long long to avoid overflow

    while (n > 0) {
        int digit = n % 10;       // get last digit
        reversed = reversed * 10 + digit; // append it
        n /= 10;                  // remove last digit
    }

    if (isNegative) reversed = -reversed;
    return (int)reversed; // cast back to int
}

int main() {
    vector<int> tests = {1234, 100, 7, -123, -4000, 1534236469};

    for (int n : tests) {
        cout << "Input: " << n << " -> Reversed: " << reverseNumber(n) << endl;
    }
    return 0;
}

/*
-----------------------------------
🧠 Dry Run Example: N = 1234
-----------------------------------
Step 1: reversed = 0
Step 2: digit = 4, reversed = 0*10 + 4 = 4
Step 3: digit = 3, reversed = 4*10 + 3 = 43
Step 4: digit = 2, reversed = 43*10 + 2 = 432
Step 5: digit = 1, reversed = 432*10 + 1 = 4321
Output = 4321
-----------------------------------
*/