#include "task_6.h"
#include <vector>

std::pair<int, int> search_insert_position(const std::vector<int>& nums, int target) {
    int left = 0;
    int right = static_cast<int>(nums.size()) - 1;
    int index = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            // Target is found
            index = mid;
            break;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
            index = mid; // Keep track of the potential insert position
        }
    }

    return {index == -1 ? -1 : 1, index == -1 ? left : index};
}
