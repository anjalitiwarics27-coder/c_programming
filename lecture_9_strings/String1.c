#include<stdio.h>
int main(){
    char arr[]="College Wallah is best channel for coders\0";
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}