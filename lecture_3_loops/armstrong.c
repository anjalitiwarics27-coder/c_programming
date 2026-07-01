#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int original = n;
    int sum = 0;
    int ld = 0;
    
    while (n > 0) {
        ld = n % 10;          // 1. Get the last digit
        sum = sum + (ld * ld * ld); // 2. Cube it and add to sum
        n = n / 10;           // 3. Remove the last digit
    }
    
    // 4. Check if the sum of cubes matches the original number
    if (original == sum) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is NOT an Armstrong number.\n", original);
    }
    
    return 0;
}