#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int a;
    printf("Enter the elemnt you want to check :  ");
    scanf("%d",&a);
    for(int i=1;i<=n;i++){
        if(arr[i]>a){
            printf("%d",arr[i]);
        }
        printf(" ");
    }
    return 0;
}