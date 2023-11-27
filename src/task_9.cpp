#include "task_9.h"

int find_kth_missing_positive(const std::vector<int>& arr, int n, int k) {
    int count = 0;
    int num = 1;
    int i = 0;

    while (count < k && i < arr.size()) {
        if (arr[i] == num) {
            ++i;
        } else {
            ++count;
        }

        if (count < k) {
            ++num;
        }
    }

    // The kth missing positive integer is found
    return num + k - count - 1;
}
