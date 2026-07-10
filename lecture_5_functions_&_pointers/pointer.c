#include<stdio.h>
int main(){
    int a =25;
    int* x=&a;   //int* --> pointer 
    printf("%p\n",&a);
    printf("%p\n",x);
    printf("%p\n",&x);
    printf("%d\n",*x);
    return 0;
}