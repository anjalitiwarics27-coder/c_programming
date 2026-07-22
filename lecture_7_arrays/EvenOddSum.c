#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int sumeven = 0;
    int sumodd = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Fixed: Read into arr[i]
    }

    for (int i = 0; i < n; i++) {
        // Checking index position (0, 2, 4... vs 1, 3, 5...)
        if (i % 2 == 0) {
            sumeven += arr[i];
        } else {
            sumodd += arr[i];
        }
    }

    int diff = sumeven - sumodd;

    printf("\n-----------------\n");
    printf("Sum of even-indexed elements : %d\n", sumeven);
    printf("Sum of odd-indexed elements  : %d\n", sumodd);
    printf("Difference                   : %d\n", diff);

    return 0;
}