#include "task_4.h"
#include <vector>
#include <queue>

int kth_smallest_element(int n, int k, const std::vector<std::vector<int>>& matrix) {
    // Using a min-heap to efficiently find the kth smallest element
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;

    // Iterate through the matrix and add elements to the min-heap
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            min_heap.push(matrix[i][j]);

            // If the size of the heap exceeds k, remove the smallest element
            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }
    }

    // The top of the min-heap now contains the kth smallest element
    return min_heap.top();
}