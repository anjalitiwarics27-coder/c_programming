#include<stdio.h>
int main(){
    int arr[5], n ;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nReverse number\n");
    for(int i=5;i>=1;i--){
        printf("%d",arr[i]);
    }
    return 0;
}