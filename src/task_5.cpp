#include "task_5.h"
#include <vector>
#include <unordered_map>
#include <queue>

struct Compare {
    bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second < b.second;
    }
};

std::vector<int> k_most_frequent_elements(const std::vector<int>& nums, int k) {
    std::unordered_map<int, int> frequency_map;

    // Count the frequency of each element in the array
    for (int num : nums) {
        frequency_map[num]++;
    }

    // Using a max-heap to efficiently find the k most frequent elements
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, Compare> max_heap;

    // Add elements and their frequencies to the max-heap
    for (const auto& entry : frequency_map) {
        max_heap.push(entry);
    }

    // Extract the k most frequent elements from the max-heap
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        result.push_back(max_heap.top().first);
        max_heap.pop();
    }

    return result;
}
