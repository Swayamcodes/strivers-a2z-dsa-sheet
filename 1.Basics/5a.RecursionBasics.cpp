#include <bits/stdc++.h>
using namespace std;

// ---------------------------------------------------------
// Q1: Print a name N times using recursion
// i = current count
// n = total times to print
// ---------------------------------------------------------
void printName(int i, int n)
{
    if (i > n) return;          // Base case: stop when i exceeds n
    cout << "Swayam" << endl;   // Print the name
    printName(i + 1, n);        // Recursive call: increase i
}

// ---------------------------------------------------------
// Q2: Print numbers from 1 to N
// ---------------------------------------------------------
void print1toN(int i, int n)
{
    if (i > n) return;          // Stop when i crosses n
    cout << i << endl;          // Print the current number
    print1toN(i + 1, n);        // Move to next number
}

// ---------------------------------------------------------
// Q3: Print numbers from N to 1
// ---------------------------------------------------------
void printNto1(int i, int n)
{
    if (i < 1) return;          // Stop when i becomes less than 1
    cout << i << endl;          // Print current number
    printNto1(i - 1, n);        // Count backwards
}

// ---------------------------------------------------------
// Q4: Print 1 to N using BACKTRACKING
// ---------------------------------------------------------
void print1tonbybacktrak(int i, int n)
{
    if (i < 1) return;          // Base case
    print1tonbybacktrak(i - 1, n); // First go deep till i = 1
    cout << i << endl;          // Print while coming back
}

// ---------------------------------------------------------
// Q5: Print N to 1 using BACKTRACKING
// ---------------------------------------------------------
void printNto1ByBackTrack(int i, int n)
{
    if (i > n) return;          // Base case
    printNto1ByBackTrack(i + 1, n); // Go till i = n
    cout << i << endl;          // Print while returning
}

// ---------------------------------------------------------
// Q6: Sum of N numbers (PARAMETERIZED way)
// sum carries the total value
// ---------------------------------------------------------
void SumofN(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;            // Print final answer
        return;
    }
    SumofN(i - 1, sum + i);     // Add i to sum and move down
}

// ---------------------------------------------------------
// Q6 (functional recursion): returns sum of 1 to n
// ---------------------------------------------------------
int sumOfN(int n)
{
    if (n == 0) return 0;       // Base case
    return n + sumOfN(n - 1);   // n + sum of previous numbers
}

// ---------------------------------------------------------
// Q7: Factorial of N
// ---------------------------------------------------------
int fact(int n)
{
    if (n == 0) return 1;       // Base case: factorial(0) = 1
    return n * fact(n - 1);     // n * factorial of (n-1)
}

// ---------------------------------------------------------
// Q8: Reverse an array using recursion (one variable i)
// ---------------------------------------------------------
void reverseArray(int i, int arr[], int n){
   if(i >= n/2) return;         // Stop once pointers cross halfway
   swap(arr[i], arr[n-i-1]);    // Swap first and last
   reverseArray(i + 1, arr, n); // Move inward
}

// ---------------------------------------------------------
// Q9: Check if string is palindrome using recursion
// i = pointer from left
// s.size() - i - 1 = pointer from right
// ---------------------------------------------------------
bool stringPalindrome(int i, string &s){
    if(i >= s.size()/2) return true;        // All chars checked
    if(s[i] != s[s.size()-i-1]) return false; // Mismatch -> not palindrome
    return stringPalindrome(i + 1, s);      // Move to next char
}

// ---------------------------------------------------------
// Q10: Fibonacci using multiple recursion
// VERY SLOW for large n, but good for recursion practice
// ---------------------------------------------------------
int fibonacciSeries(int n){
    if(n <= 1) return n;         // Base case: fib(0)=0, fib(1)=1
    int last = fibonacciSeries(n-1);      // fib(n-1)
    int secondLast = fibonacciSeries(n-2);// fib(n-2)
    return last + secondLast;    // total
}

// ---------------------------------------------------------
// MAIN FUNCTION
// ---------------------------------------------------------
int main()
{
    int n;
    cin >> n;

    // Uncomment the function you want to test:

    // printName(1,n);
    // print1toN(1,n);
    // printNto1(n,n);
    // print1tonbybacktrak(n,n);
    // printNto1ByBackTrack(1, n);
    // SumofN(n,0);
    // cout << sumOfN(n);
    // cout << fact(n);

    // int arr[n];
    // for(int i = 0; i<n; i++) cin >> arr[i];
    // reverseArray(0,arr,n);
    // for(int i=0; i<n; i++) cout << arr[i] << " ";

    // string s = "madsam";
    // cout << stringPalindrome(0,s);

    cout << fibonacciSeries(n);

    return 0;
}
