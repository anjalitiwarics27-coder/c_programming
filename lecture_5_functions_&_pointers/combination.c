// #include <stdio.h>
// // Recursive function to calculate Combination (nCr)
// int combination(int n, int r) {
//     // Base Case 1: nCr is not defined if r is greater than n
//     if (r > n) {
//         return 0;
//     }
//     // Base Case 2: nC0 is 1, and nCn is 1
//     if (r == 0 || r == n) {
//         return 1;
//     }
//     // Recursive Case: Pascal's identity
//     else {
//         return combination(n - 1, r - 1) + combination(n - 1, r);
//     }
// }

// int main() {
//     int n, r;
    
//     printf("Enter n: ");
//     scanf("%d", &n); // Removed \n
    
//     printf("Enter r: ");
//     scanf("%d", &r); // Removed \n
    
//     int check = combination(n, r);
    
//     printf("%dC%d = %d\n", n, r, check);
    
//     return 0;
// }

//............2nd method

#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n ,int r ){
    int ncr=factorial(n)/((factorial(r)) * factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int r;
    printf("Enter the r ");
    scanf("%d",&r);
    int ncr= combination(n,r);
    printf("%d",ncr);
    return 0;
}