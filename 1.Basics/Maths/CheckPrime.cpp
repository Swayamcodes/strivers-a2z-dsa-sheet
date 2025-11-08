#include <bits/stdc++.h>
using namespace std;

/*
    Problem: Check Prime Number (All 3 Methods)
    -------------------------------------------
    Given an integer N, check whether it is a prime number or not.

    📌 Definition:
      A prime number is greater than 1 and divisible only by 1 and itself.

    -------------------------------------------
    Method 1️⃣ – Divisor Count (Basic Idea)
      • Count total divisors.
      • If total divisors == 2 (1 and itself) → Prime.
      • Simple, but slightly slower.

      Time: O(√N)
      Space: O(1)

    Method 2️⃣ – Early Return (Efficient)
      • Directly return false as soon as a divisor is found.
      • Much faster for large numbers.

      Time: O(√N)
      Space: O(1)

    Method 3️⃣ – 6k ± 1 Optimization (Highly Efficient)
      • All primes > 3 are of form 6k ± 1.
      • Check divisibility by 2 and 3 first, then loop i += 6.
      • Commonly used in interviews.

      Time: O(√N/6) ≈ O(√N)
      Space: O(1)
*/

//-------------------------------------------
// Method 1: Divisor Count
//-------------------------------------------
bool isPrime_count(int n) {
    if (n <= 1) return false;
    int count = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++; // divisor i
            if (n / i != i) count++; // pair divisor
        }
    }
    return (count == 2);
}

//-------------------------------------------
// Method 2: Early Return (Standard)
//-------------------------------------------
bool isPrime_simple(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false; // found a divisor → not prime
    }
    return true; // no divisor found → prime
}

//-------------------------------------------
// Method 3: 6k ± 1 Optimization (Best)
//-------------------------------------------
bool isPrime_optimized(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;          // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return false; // multiples of 2 or 3

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

//-------------------------------------------
// Driver Code
//-------------------------------------------
int main() {
    vector<int> tests = {0, 1, 2, 3, 4, 5, 7, 9, 11, 25, 97, 100};

    cout << left << setw(8) << "Number" << setw(12) << "Count" << setw(12)
         << "Simple" << setw(12) << "Optimized" << endl;
    cout << string(40, '-') << endl;

    for (int n : tests) {
        cout << left << setw(8) << n
             << setw(12) << (isPrime_count(n) ? "Prime" : "Not Prime")
             << setw(12) << (isPrime_simple(n) ? "Prime" : "Not Prime")
             << setw(12) << (isPrime_optimized(n) ? "Prime" : "Not Prime")
             << endl;
    }
    return 0;
}

/*
-------------------------------------------
🧠 Dry Run Example: n = 25
-------------------------------------------
Method 1: Divisor Count
  i=1 → count+=2 (1,25)
  i=2 → no divisor
  i=3 → no divisor
  i=4 → no divisor
  i=5 → divisor; since 5*5=25, count+=1 (avoid double count)
  Total count=3 ❌ not prime

Method 2 & 3:
  25 % 5 == 0 → false ✅
-------------------------------------------
*/
