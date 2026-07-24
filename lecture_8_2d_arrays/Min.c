#include<stdio.h>
int main(){
    int min,row=3,col=3;
    int arr[3][3]={{1,2,3},{4,5,6},{0,3,4}};
    min=arr[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }

    }
    printf("max :%d\n",min);
    return 0;
}