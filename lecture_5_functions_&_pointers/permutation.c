#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i =1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int permutation(int n, int r){
    int ncr=(factorial(n)/(factorial(n-r)));
    return ncr;
}
int main(){
    int n,r;
    printf("Enter the n:");
    scanf("%d",&n);
    printf("Enter the r:");
    scanf("%d",&r);
    int ncr=permutation(n,r);
    printf("%d",ncr);
    return 0;
}