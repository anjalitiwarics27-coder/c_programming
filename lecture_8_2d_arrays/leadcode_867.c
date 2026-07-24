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
    int temp;
    for (int i=0;i<r;i++){
        for(int j=i;j<c;j++){
            int temp =arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i] =temp;
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
    // ye normal tarnspose se isliye alg hein kuki isme ham only print nhi krwa rhe  sath hi sath ham isme change kr rhe h actual arrays mein 
}