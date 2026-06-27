#include<stdio.h>
int main(){
    int num1;
    int num2;
    printf("enter the ist number ");
    scanf("%d",&num1);
    printf("enter the 2nd number ");
    scanf("%d",&num2);
    if(num1 > num2){
        printf("num1 is largest");
    }
    else{
        printf("num2 is largest ");
    }
}