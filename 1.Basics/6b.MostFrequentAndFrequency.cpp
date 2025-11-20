#include <bits/stdc++.h>
using namespace std;

// -----------------------------------------------------------------------------
// QUESTION 1: countFrequencies()
// Return type: vector<vector<int>>
// Goal: count how many times each element appears in the array.
// We use an unordered_map to store frequency of each number.
// Finally, we convert the map into a 2D vector of form {value, frequency}.
// -----------------------------------------------------------------------------
vector<vector<int>> countFrequencies(vector<int>& nums) {
    unordered_map<int, int> freq;  // key = value, value = count

    // Count frequency of each element
    // Using range-based loop: 'x' directly contains the value, not index
    for (int x : nums) {
        freq[x]++;  // increase frequency of x
    }

    vector<vector<int>> result;

    // Convert map entries to vector of {value, freq}
    for (auto &it : freq) {
        // it.first  = element
        // it.second = frequency
        result.push_back({it.first, it.second});
    }

    return result;
}

// -----------------------------------------------------------------------------
// QUESTION 2: mostFrequentElement()
// Return type: int
// Goal: return the element that appears most number of times.
// We again use an unordered_map to count frequencies.
// Then we iterate over the map to find the number with maximum frequency.
// -----------------------------------------------------------------------------
int mostFrequentElement(vector<int>& nums) {
    unordered_map<int, int> freq;  // stores frequency of each number

    // Count frequencies
    for (int x : nums) {
        freq[x]++;
    }

    int maxFreq = 0;     // highest frequency found
    int element = -1;    // element that has the highest frequency

    // Find element with maximum frequency
    for (auto &it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;   // update highest frequency
            element = it.first;    // update most frequent element
        }
    }

    return element;
}

// -----------------------------------------------------------------------------
// Example main() function to test both questions
// (Not required for submission, but useful for practicing locally.)
// -----------------------------------------------------------------------------
int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4};

    // Test Q1: Frequency count
    auto freqList = countFrequencies(nums);
    cout << "Frequencies (value -> count):\n";
    for (auto &v : freqList) {
        cout << v[0] << " -> " << v[1] << endl;
    }

    // Test Q2: Most frequent element
    int mostFreq = mostFrequentElement(nums);
    cout << "\nMost frequent element: " << mostFreq << endl;

    return 0;
}
