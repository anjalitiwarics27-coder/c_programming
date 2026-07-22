#include<stdio.h>

void decresing(int n){
    if(n==0){
        return;
    }

    printf("%d ", n);
    decresing(n-1);
}

int main(){
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    decresing(n);

    return 0;
}