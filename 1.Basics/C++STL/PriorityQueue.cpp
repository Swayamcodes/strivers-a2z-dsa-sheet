#include <iostream>
#include <queue>
using namespace std;

int main() {
    // ----------------- Max-Heap (Default) ------------------
    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(5);
    maxHeap.push(20);

    cout << "Max-Heap (default): ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " "; // highest first
        maxHeap.pop();
    }
    cout << "\n";

    // ----------------- Min-Heap ------------------
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);

    cout << "Min-Heap: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " "; // lowest first
        minHeap.pop();
    }
    cout << "\n";

    // ----------------- Custom Pair Priority Queue ------------------
    priority_queue<pair<int, string>> taskQueue;

    taskQueue.push({3, "Do laundry"});
    taskQueue.push({5, "Finish DSA"});
    taskQueue.push({1, "Reply emails"});

    cout << "Tasks by priority: ";
    while (!taskQueue.empty()) {
        cout << "[" << taskQueue.top().first << ": " << taskQueue.top().second << "] ";
        taskQueue.pop();
    }
    cout << "\n";

    return 0;
}
