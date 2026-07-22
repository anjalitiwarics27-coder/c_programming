#include <stdio.h>

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 8, 7}; // Added semicolon
    int max = arr[0]; // Assume first element is max

    // Start loop from index 1 and go up to 7 (i < 8)
    for (int i = 1; i < 8; i++) {
        if (arr[i] > max) { // Compare current element with overall max
            max = arr[i];
        }
    }

    printf("max : %d\n", max);
    return 0;
}