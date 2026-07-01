// q. WAP to print sum of all the even digits os a given numbers .


#include <stdio.h>

int main() {
    int n, ld;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int sum = 0;
    
    // Loop continues until all digits are processed
    while (n != 0) {
        ld = n % 10;   // 1. Extract the last digit
        
        if (ld % 2 == 0) {
            sum = sum + ld;  // 2. Add to sum ONLY if it's even
        }
        
        n = n / 10;    // 3. Remove the last digit from n
    }
    
    // 4. Print the final result after the loop finishes
    printf("The sum of all even digits is: %d\n", sum);
    
    return 0;
}