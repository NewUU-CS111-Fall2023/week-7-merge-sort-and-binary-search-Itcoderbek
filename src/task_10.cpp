#include "task_10.h"

int kth_factor(int n, int k) {
    int count = 0;

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            ++count;
            if (count == k) {
                return i;
            }
        }
    }

    // n has less than k factors
    return -1;
}