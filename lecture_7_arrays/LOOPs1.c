#include<stdio.h>
int main(){
    int n , arr[5];
    for(int i =0;i<=5;i++){
        int a =i+1;
        printf("\nEnter element number %d",i+1);
        scanf("%d",&arr[i]);
    }
    printf("%d",arr[1]);
    return 0;
}