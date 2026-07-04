#include<stdio.h>
int divisibility(int n){
    for (int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("divisible by : %d\n",i);
        }
    }
    // else{
    //       printf("the number is prime %d\n",n);
    //     }
    return 0;
}
int main(){
    int num;
    printf("enter the number ");
    scanf("%d\n",&num);
    int check=divisibility(num);
    return 0;
}