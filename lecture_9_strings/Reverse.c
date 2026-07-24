#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter your string :");
    scanf("%[^\n]s",str);
    puts("The size of is : ");
    int size=0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%d\n",size);
    puts("The reverse string is :");
    puts(str);
    return 0;
}