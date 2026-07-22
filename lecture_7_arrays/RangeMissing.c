#include <stdio.h>

int main() {
    int n = 100; // Expected total elements (1 to 100)
    
    // Array me 99 elements honge (1 element missing hai, suppose 47 missing hai)
    // Sample example ke liye 1 se 10 tak le kar dekhte hain:
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10}; // Size = 9, 5 missing hai
    int actual_n = 10; // 1 to 10 tak ke elements hone chahiye the

    // 1. Calculate Expected Sum (1 to N)
    int expected_sum = (actual_n * (actual_n + 1)) / 2;

    // 2. Calculate Actual Sum of elements present in array
    int actual_sum = 0;
    int size = actual_n - 1; // 9 elements
    
    for (int i = 0; i < size; i++) {
        actual_sum += arr[i];
    }

    // 3. Difference is the missing number
    int missing_element = expected_sum - actual_sum;

    printf("Missing Element is: %d\n", missing_element);

    return 0;
}