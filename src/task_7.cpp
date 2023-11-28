#include "task_7.h"

double recursive_pow_helper(double x, int n) {
    // Base case: x^0 = 1
    if (n == 0) {
        return 1.0;
    }

    // Recursive case
    double half_pow = recursive_pow_helper(x, n / 2);

    // If n is even, x^n = (x^(n/2))^2
    if (n % 2 == 0) {
        return half_pow * half_pow;
    }
    // If n is odd, x^n = x * (x^(n/2))^2
    else {
        return x * half_pow * half_pow;
    }
}

double recursive_pow(double x, int n) {
    // Check if n is negative, then convert it to positive and take reciprocal of the result
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }

    return recursive_pow_helper(x, n);
}