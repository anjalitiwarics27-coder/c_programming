#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("Enter the number of columns :");
    scanf("%d",&c);
    printf("Enter the all elements\n");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // matrix :
    // 1 2 3
    // 4 5 6
    //tanspose :
    // 1 4
    // 2 5
    // 3 6
    int brr[c][r];
    printf("\n");
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
           brr[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf(" %d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}