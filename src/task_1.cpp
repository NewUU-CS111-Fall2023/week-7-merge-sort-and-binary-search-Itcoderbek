#include "task_1.h"
#include <iostream>
#include <vector>
#include <algorithm>

int sum_of_remaining_numbers(int T, const std::vector<std::pair<int, std::vector<int>>>& test_cases) {
    int total_sum = 0;

    for (int t = 0; t < T; ++t) {
        int N = test_cases[t].first;
        const std::vector<int>& A = test_cases[t].second;

        // Your implementation for Task 1 goes here

        // Placeholder code for summing the remaining numbers
        for (int i = 0; i < N; ++i) {
            total_sum += A[i];
        }
    }

    return total_sum;
}
