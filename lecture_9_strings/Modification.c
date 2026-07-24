#include<stdio.h>
int main(){
    char arr[]="Anjali Tiwari";
    arr[0]='S';
    for(int i=0;i<13;i++){
        printf(" %c ",arr[i]);
    }
    return 0;
}