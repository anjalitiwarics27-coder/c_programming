#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows :");
    scanf("%d",&r);
    printf("Enter the number of col :");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter the rows %d and col %d :",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

        for(int i=0;i<r;i++){
            if(i%2==0){
                for(int j=0;j<c;j++){
                    printf("%d",arr[i][j]);
              }
            }
            else{
            for(int j=c-1;j>=0;j--){
                printf("%d",arr[i][j]);
            }
        }
        printf("\n");

    }
    return 0;
}