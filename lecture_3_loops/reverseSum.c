#include<stdio.h>

int main(){
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    
    int original = n; // Store the original number here
    int sum = 0;
    int r = 0;
    
    while (n > 0){
        r = r * 10;
        r = r + (n % 10);
        n = n / 10;
    }
    
    // Use the backup variable instead of n (which is now 0)
    sum = original + r; 
    
    printf("The sum of the number and its reverse is %d", sum);
    return 0;
}