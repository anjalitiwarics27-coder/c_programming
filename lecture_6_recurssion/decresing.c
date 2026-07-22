#include<stdio.h>
void GM(int n ){
    if(n==0) return ;
    else {
        printf("Good Morning \n");
        GM(n-1);
    }   
}
int main(){
    int n ;
    printf("Enter the number :");
    scanf("%d",&n);
    GM(n);
}