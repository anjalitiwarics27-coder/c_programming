#include<stdio.h>
int main(){
    int rows ,col;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of col : ");
    scanf("%d",&col);
    int arr[rows][col];
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            printf("Enter the number of row %d and column %d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("----------------------------------------------------------");
    printf("\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

