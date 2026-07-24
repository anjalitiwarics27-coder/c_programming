#include<stdio.h>
int main(){
    char arr[]={'A','N','J','A','L','I','\0'};
    int i=0;
    while(arr[i]!='\0'){
        printf("%c ",arr[i]);
        i++;
    }
   
    return 0;
}