#include<stdio.h>
int greatestThreeDigit(int n1,int n2,int n3){
    if((n1>n2)&&(n1>n3)){
        printf("num1 is greatest :%d ",n1);
    }
    else if ((n2>n3)&&(n2>n1)){
        printf("num2 is greatest :%d",n2);
    }
    else{
        printf("num3 is greatest :%d",n3);
    }
    return 0;
}

int main(){
    int num1,num2,num3;
    printf("enter the three digit number : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    int greatest = greatestThreeDigit(num1,num2,num3);
    return 0;
}