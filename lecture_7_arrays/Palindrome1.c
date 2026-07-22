#include<stdio.h>
#include<stdbool.h>
int check(int arr[]){
    bool flag = true;
    for(int i=0;i<=7/2;i++){
        if(arr[i]!=arr[6-i]){
            flag=false;
            break;
        }
    }
    if(flag == true){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    check(arr);
    return 0;
}