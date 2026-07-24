#include<stdio.h>
int main(){
    int row , col;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    printf("enter the number of coloumns : ");
    scanf("%d",&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the number of rows %d and coloumns %d  :",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n");
    printf("\n");
    printf("-----------------------------------------------------------");
    printf("\n");
    printf("\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("-----------------------------------------------------------");
    printf("\n");
    printf("\n");

    printf("making 2nd matrix :\n");
    int brr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the number of rows %d and coloumns %d  :",i+1,j+1);
            scanf("%d",&brr[i][j]);
        }
    }

    printf("\n");
    printf("\n");
    printf("-----------------------------------------------------------");
    printf("\n");
    printf("\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf(" %d ",brr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("-----------------------------------------------------------");
    printf("\n");
    printf("\n");
    printf("sum of the two matrx :");
    printf("\n");
    int sum[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum[i][j]=(arr[i][j] +brr[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf(" %d ",sum[i][j]);
        }
        printf("\n");
    }  
    return 0;
}