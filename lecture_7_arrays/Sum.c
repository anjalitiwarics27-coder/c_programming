#include<stdio.h>
int main(){
    int arr[5]={5,3,2,1,3};
    int sum=0;
    for(int i=1;i<=5;i++){
        sum+=arr[i];
    }
    printf("sum : %d",sum);
}