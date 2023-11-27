#include "task_3.h"
#include <vector>
#include <algorithm>

std::vector<int> merge_sorted_arrays(int N, int M, const std::vector<int>& A, const std::vector<int>& B) {
    std::vector<int> result;
    result.reserve(N + M);

    int i = 0, j = 0;

    // Merge the two sorted arrays in non-increasing order
    while (i < N && j < M) {
        if (A[i] >= B[j]) {
            result.push_back(A[i]);
            ++i;
        } else {
            result.push_back(B[j]);
            ++j;
        }
    }

    // Append the remaining elements of array A
    while (i < N) {
        result.push_back(A[i]);
        ++i;
    }

    // Append the remaining elements of array B
    while (j < M) {
        result.push_back(B[j]);
        ++j;
    }

    return result;
}
