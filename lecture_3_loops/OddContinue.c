// q-> WAP to print odd numbers from 1 to 100
#include<stdio.h>
int main(){
    int n ;
    for(int i=1;i<=100;i++){
        if(i%2==0){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
} 