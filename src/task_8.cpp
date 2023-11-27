#include "task_8.h"

int find_missing_number(const std::vector<int>& nums) {
    int n = static_cast<int>(nums.size());

    // Calculate the expected sum of the first n+1 natural numbers
    int expected_sum = n * (n + 1) / 2;

    // Calculate the actual sum of the elements in the array
    int actual_sum = 0;
    for (int num : nums) {
        actual_sum += num;
    }

    // The missing number is the difference between the expected and actual sums
    return expected_sum - actual_sum;
}
