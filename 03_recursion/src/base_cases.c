#include "recursion.h"

/*
 * Task 1a - Sum of digits
 * Time: O(log n)
 * Space: O(log n)
 * Recurrence: T(n) = T(n/10) + O(1)
 * a = 1, b = 10, c = log_b(a) = log_10(1) = 0, f(n) = O(1)
 * f(n) = O(1) grows at same rate as n^c
 * Case 2 of MST
 * Result: T(n) = θ(n^0 * log n) = θ(log n)
 * */
int sum_digits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sum_digits(n / 10);
}

/*
 * Task 1b - Reverse String
 * Time: O(n)
 * Space: O(n)
 * Recurrence: T(n) = T(n - 2) + O(1)
 * a = 1, b = 1, f(n) = O(1)
 * a = 1 -> Case 2 of MST for Subtractive Recurrences states O(n * f(n))
 * Result: O((n/b)* f(n)) = O((n/b) * 1) = O(n)
 * */
void reverse_string(char *s, int left, int right) {
    if (left >= right)
        return;
    char temp = s[left];
    s[left]   = s[right];
    s[right]  = temp;
    reverse_string(s, left + 1, right - 1);
}

/*
 * Task 1c - Check if array sorted (assumed ascending)
 * Time: O(n)
 * Space: O(n)
 * Recurrence: T(n) = T(n - 1) + O(1)
 * a = 1, b = 1, f(n) = O(1)
 * a = 1 -> Case 2 of MST for SR
 * Result: O(n) = O(n * f(n)) = O(n * 1) = O(n)
 * */
int is_sorted(int arr[], int n) {
    if (n <= 1)
        return 1;
    if (arr[n - 1] < arr[n - 2])
        return 0;
    return is_sorted(arr, n - 1);
}

/*
 * Task 1d - GCD (Euclidean)
 * Time: O(log min(a,b))
 * Space: O(log min(a,b))
 * Recurrence: T(a, b) = T(b, a % b) + O(1)
 * No clean MST for this
 * Number of steps known due to Lame's Theorem
 * */
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
