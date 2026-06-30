#include<stdio.h>
int main(){
    int n ;
    printf("enter the number :");
    scanf("%d",&n);
    ((n>99)&&(n<1000))?printf("three digit number :"):printf(" not a three digit number :");
}