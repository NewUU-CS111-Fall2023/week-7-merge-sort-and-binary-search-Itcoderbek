
#include "task_2.h"
#include <algorithm>

int max_beautifulness(int n, const std::vector<int>& permutation) {
    int beautifulness = 0;

    // Calculate initial beautifulness
    for (int i = 0; i < n; ++i) {
        beautifulness += std::abs(permutation[i] - (i + 1));
    }

    // Find the maximum beautifulness after at most one swap
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 2; j < n; ++j) {
            // Swap elements i and j and calculate the new beautifulness
            int new_beautifulness = beautifulness - std::abs(permutation[i] - (i + 1)) - std::abs(permutation[j] - (j + 1));
            new_beautifulness += std::abs(permutation[i] - (j + 1)) + std::abs(permutation[j] - (i + 1));

            // Update the maximum beautifulness if the new one is greater
            beautifulness = std::max(beautifulness, new_beautifulness);
        }
    }

    return beautifulness;
}