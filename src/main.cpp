#include <iostream>
#include <vector>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include "task_6.h"
#include "task_7.h"
#include "task_8.h"
#include "task_9.h"
#include "task_10.h"


int main() {
    // Task 1
   int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        std::cin >> N;

        std::vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> A[i];
        }

        long long int result = Task1::sumOfRemainingNumbers(N, A);
        std::cout << result << std::endl;
    }

    // Task 2
    int n2 = 5;
    std::vector<int> permutation2 = {1, 2, 3, 4, 5};
    int result2 = max_beautifulness(n2, permutation2);
    std::cout << "Task 2 Result: " << result2 << std::endl;

    // Task 3
    int T3 = 1;
    std::vector<int> A3 = {1, 3, 5};
    std::vector<int> B3 = {2, 4, 6};
    std::vector<std::pair<int, std::vector<int>>> test_cases3 = {{3, 3, A3, B3}};
    std::vector<int> result3 = merge_sorted_arrays(3, 3, A3, B3);
    std::cout << "Task 3 Result: ";
    for (int num : result3) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Task 4
    int n4 = 3;
    int k4 = 5;
    std::vector<std::vector<int>> matrix4 = {{1, 5, 9}, {10, 11, 13}, {12, 13, 15}};
    int result4 = kth_smallest_element(n4, k4, matrix4);
    std::cout << "Task 4 Result: " << result4 << std::endl;

    // Task 5
    std::vector<int> nums5 = {1, 1, 1, 2, 2, 3};
    int k5 = 2;
    std::vector<int> result5 = k_most_frequent_elements(nums5, k5);
    std::cout << "Task 5 Result: ";
    for (int num : result5) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Task 6
    std::vector<int> nums6 = {1, 3, 5, 6};
    int target6 = 5;
    std::pair<int, int> result6 = search_insert_position(nums6, target6);
    std::cout << "Task 6 Result: " << result6.first << " " << result6.second << std::endl;

    // Task 7
    double x7 = 2.0;
    int n7 = 10;
    double result7 = recursive_pow(x7, n7);
    std::cout << "Task 7 Result: " << result7 << std::endl;

    // Task 8
    std::vector<int> nums8 = {3, 0, 1};
    int result8 = find_missing_number(nums8);
    std::cout << "Task 8 Result: " << result8 << std::endl;

    // Task 9
    int n9 = 5;
    int k9 = 2;
    std::vector<int> arr9 = {2, 3, 4, 7, 11};
    int result9 = find_kth_missing_positive(arr9, n9, k9);
    std::cout << "Task 9 Result: " << result9 << std::endl;

    // Task 10
    int n10 = 12;
    int k10 = 3;
    int result10 = kth_factor(n10, k10);
    std::cout << "Task 10 Result: " << result10 << std::endl;

    return 0;
}
