#include<stdio.h>
int check(int arr[]){
    int count=1;
    for(int i=0;i<=7/2;i++){
        if(arr[i]!=arr[6-i]){
            count=0;
            break;
        }
    }
    if(count==1){
        printf("Palindrome ");
    }
    else{
        printf("Not Palindrome ");
    }
}
int main(){
    int arr[7]={1,2,3,4,3,2,1};
    check(arr);
}