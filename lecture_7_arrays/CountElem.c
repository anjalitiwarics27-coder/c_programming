#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number of array :  ");
    scanf("%d",&n);
    int arr[n];
    int count = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter the elem you want to search  ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count=count+1;
        }
    }
    printf("count : %d",count);
}