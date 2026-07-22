#include<stdio.h>
void reverse(int arr[],int si,int ei){
    int i=si,j=ei, temp ;
    for(int i=si,j=ei;i<j;i++,j--){
        temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int n,k;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("Enter the array  %d  : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the k ");
    scanf("%d",&k);
    // steps
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}