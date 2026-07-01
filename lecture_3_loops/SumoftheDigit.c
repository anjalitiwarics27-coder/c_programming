//WAP to print sum of digits of a given number .
#include<stdio.h>
int main(){
    int n ,ld ;
    printf("enter the number : ");
    scanf("%d",&n);
     int sum=0;
    while(n!=0){
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    printf("sum pf the digits : %d",sum);
    return 0;
}