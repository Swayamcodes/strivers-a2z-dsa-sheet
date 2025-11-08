#include <bits/stdc++.h>
using namespace std;

/*
    Problem: Palindrome Number
    --------------------------
    Given an integer N, check whether it is a palindrome or not.
    A palindrome number reads the same forward and backward.

    Example:
      Input:  N = 121   -> Output: true
      Input:  N = -121  -> Output: false
      Input:  N = 123   -> Output: false

    -----------------------------------
    📌 Approach 1: Reverse the Number
      - If reversed(N) == N, then it's a palindrome.
      - Handle negatives separately (negative numbers are not palindromes).

      Time Complexity: O(log10(N))
      Space Complexity: O(1)

    -----------------------------------
    📌 Approach 2: Convert to String (Simpler)
      - Convert number to string.
      - Compare with its reverse.
      - Works easily for beginners.
*/

// Approach 1: Mathematical Reversal
bool isPalindrome_math(int n) {
    if (n < 0) return false; // negative numbers can't be palindrome

    int original = n;
    long long reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return (original == reversed);
}

// Approach 2: String Method
bool isPalindrome_string(int n) {
    if (n < 0) return false;
    string s = to_string(n);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return (s == rev);
}

int main() {
    vector<int> tests = {121, -121, 10, 0, 12321, 1001, 1221};

    cout << "Palindrome Check (Math):\n";
    for (int n : tests) {
        cout << n << " -> " << (isPalindrome_math(n) ? "true" : "false") << endl;
    }

    cout << "\nPalindrome Check (String):\n";
    for (int n : tests) {
        cout << n << " -> " << (isPalindrome_string(n) ? "true" : "false") << endl;
    }
    return 0;
}

/*
-----------------------------------
🧠 Dry Run Example: N = 121
-----------------------------------
original = 121
reversed = 0
Step 1: digit=1 → reversed=1
Step 2: digit=2 → reversed=12
Step 3: digit=1 → reversed=121
Compare: 121 == 121 ✅ Palindrome
-----------------------------------
*/