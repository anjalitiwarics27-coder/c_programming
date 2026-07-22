#include<stdio.h>
#include<stdbool.h>
void check(int n ,int arr[n],int k ){
    bool flag = 0;
    int idx;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            flag++;
            idx=i;
            break;
        }
    }
    if(flag == 0){
        printf("The element is not present %d ",k);
    }
    else{
        printf("The element is %d and present at index %d",k,idx);
    }
    return;
}
int main(){
    int n,k;
    printf("Enter the arrays size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the search element :");
    scanf("%d",&k);
    check(n,arr,k);
}