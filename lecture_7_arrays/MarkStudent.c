#include<stdio.h>
int main(){
    int n ;
    printf("Enter the n number of students :");
    scanf("%d",&n);
    int marks[n];
    for(int i=1;i<=n;i++){
        printf("Enter the marks of stduent %d : ",i);
        scanf("%d",&marks[i]);
    }
    printf("\n-----------------\n");
    for(int i=1;i<=n;i++){
        if(marks[i]<35){
            printf("%d",i);
        }
        printf(" ");
    }
    return 0;

}