#include<stdio.h>
int main(){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    if(num%5 == 0){
        printf("divisible by 5  and the num is %d ",num);
    }
    else{
        printf("not divisible by 5 and the num is  %d",num);
    }
    return 0;
}