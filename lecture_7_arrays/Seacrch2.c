#include<stdio.h>
int main(){
    int arr[7]={12,4,30,4,5,6,7};
    int x=4;
    int check=0;  //0 means element is not present 
    for(int i=1;i<=7;i++){
        if(arr[i]==x){
            check=1;
            break;
        }
    }
    if(check==0){
        printf("%d is not present in the array ",x);
    }
    else{
        printf("%d is present in the array ",x);
    }
    return 0;
}