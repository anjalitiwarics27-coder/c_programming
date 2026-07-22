#include<stdio.h>
int main(){
    int n , arr[5];
    //int arr[5]={2,4,2,1,3};
    printf("Enter the 5 number :");
    scanf("%d\n",&n);
    for(int i =1;i<=5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}