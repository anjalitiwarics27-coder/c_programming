#include<stdio.h>

int main(){
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    
    // Check for invalid input
    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! n must be >= r and both must be non-negative.\n");
        return 1;
    }

    int nfact = 1;
    int rfact = 1;
    int nrfact = 1;

    // 1. Calculate n!
    for(int i = 2; i <= n; i++){
        nfact = nfact * i;
    }
    
    // 2. Calculate r! (Loop goes up to r)
    for(int i = 2; i <= r; i++){
        rfact = rfact * i;
    }
    
    // 3. Calculate (n-r)! (Loop goes up to n-r)
    for(int i = 2; i <= (n - r); i++){
        nrfact = nrfact * i;
    }

    // Explicitly cast to float to allow precise division if needed
    float ncr = (float)nfact / (rfact * nrfact);
    
    // Using %.2f to print up to 2 decimal places cleanly
    printf("nCr = %.2f\n", ncr);

    return 0;
}