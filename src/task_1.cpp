#include "task_1.h"
#include <algorithm>

long long int Task1::sumOfRemainingNumbers(int n, std::vector<int>& arr) {
    std::vector<int> medians;
    
    for (int i = 1; i <= n - 2; ++i) {
        for (int j = 0; j <= n - i - 1; ++j) {
            std::vector<int> subarray(arr.begin() + j, arr.begin() + j + i + 2);
            std::sort(subarray.begin(), subarray.end());
            medians.push_back(subarray[i / 2]);
        }
        
        int minMedian = *std::min_element(medians.begin(), medians.end());
        auto it = std::find(arr.begin(), arr.end(), minMedian);
        arr.erase(it);
        
        medians.clear();
    }
    
    long long int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    
    return sum;
}