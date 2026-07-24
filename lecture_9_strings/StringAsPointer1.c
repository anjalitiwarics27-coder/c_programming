#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter the string ");
    scanf("%[^\n]s",str);
    //int i=0;
    char* ptr =str;
    while(*ptr!=0){
        printf("%c",*ptr);
        ptr++;
       // i++;
    }
    return 0;
}