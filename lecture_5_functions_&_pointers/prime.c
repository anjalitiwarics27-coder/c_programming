#include<stdio.h>
int prime(int n ){
    int count=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            count+=1;
            break;
        }
    }
    if(count==0){
        printf("It's a prime number :%d",n);
    }
    else{
        printf("It is not a prime number :%d",n);
    }
}
int main(){
    int n ;
    printf("enter the digit : ");
    scanf("%d\n",&n);
    int CheckPrime = prime(n);
    return 0;
}