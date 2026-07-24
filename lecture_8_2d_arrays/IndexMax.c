#include<stdio.h>

int main() {

    int arr[3][3] = {
        {1,2,4},
        {7,6,5},
        {3,8,1}
    };

    int max = arr[0][0];
    int min = arr[0][0];

    int maxRow = 0, maxCol = 0;
    int minRow = 0, minCol = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {

            if(arr[i][j] > max) {
                max = arr[i][j];
                maxRow = i;
                maxCol = j;
            }

            if(arr[i][j] < min) {
                min = arr[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    printf("Max = %d and index = (%d,%d)\n", max, maxRow, maxCol);
    printf("Min = %d and index = (%d,%d)\n", min, minRow, minCol);

    return 0;
}