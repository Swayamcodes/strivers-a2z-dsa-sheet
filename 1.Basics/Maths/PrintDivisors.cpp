#include <bits/stdc++.h>
using namespace std;

/*
    Problem: Print All Divisors of a Number
    --------------------------------------
    Given an integer N, print all its divisors in sorted order.

    Example:
      Input:  N = 36
      Output: 1 2 3 4 6 9 12 18 36

    --------------------------------------
    📌 Approach 1: Simple Loop (O(N))
      - Run a loop from 1 to N.
      - If i divides N (N % i == 0), print i.

    📌 Approach 2: Optimized Loop (O(√N)) ✅
      - Every divisor i has a pair (N / i).
      - So loop only till sqrt(N).
      - Store divisors and their pairs, then sort.

      Time Complexity: O(√N)
      Space Complexity: O(divisors count)
*/

// --------------------------------------
// ✅ Optimized Approach
// --------------------------------------
vector<int> getDivisors(int n) {
    vector<int> divisors;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) // avoid duplicates for perfect squares
                divisors.push_back(n / i);
        }
    }

    sort(divisors.begin(), divisors.end()); // ensure ascending order
    return divisors;
}

int main() {
    vector<int> tests = {1, 12, 25, 36, 100};

    for (int n : tests) {
        cout << "Divisors of " << n << ": ";
        vector<int> divisors = getDivisors(n);
        for (int d : divisors) cout << d << " ";
        cout << endl;
    }
    return 0;
}

/*
--------------------------------------
🧠 Dry Run Example: N = 36
--------------------------------------
i = 1 → 36 % 1 == 0 → divisors = [1,36]
i = 2 → 36 % 2 == 0 → divisors = [1,36,2,18]
i = 3 → 36 % 3 == 0 → divisors = [1,36,2,18,3,12]
i = 4 → 36 % 4 == 0 → divisors = [1,36,2,18,3,12,4,9]
i = 5 → not divisor
i = 6 → 36 % 6 == 0 → divisors = [1,36,2,18,3,12,4,9,6]
Now sort: [1,2,3,4,6,9,12,18,36]
--------------------------------------
*/