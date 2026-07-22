#include<stdio.h>
int add(int n){
    if(n==1) return 1;
    return n+add(n-1);
}
int main(){
    int n ;
    printf("Enter the number :");
    scanf("%d",&n);
    int sum=add(n);
    printf("sum : %d",sum);
    return 0;
}