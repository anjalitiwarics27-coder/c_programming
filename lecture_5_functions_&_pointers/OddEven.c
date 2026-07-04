#include<stdio.h>
int  divisibilityCheck(int n ){
    if(n%2==0){
        printf("even :%d",n);
    }
    else{
        printf("ODD: %d",n);
    }
}
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    int Check=divisibilityCheck(a);

    return 0;
}