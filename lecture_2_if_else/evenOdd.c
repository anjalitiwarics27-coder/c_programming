#include<stdio.h>
int main(){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    if (num %2 == 0){
        printf("even :%d",num);
    }
    else{
        printf("odd :%d",num);
    }
}