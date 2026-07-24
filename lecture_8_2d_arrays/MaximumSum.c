#include<stdio.h>

int main() {

    int arr[3][3] = {
        {1,4,2},
        {2,6,3},
        {3,4,2}
    };

    int max = 0;
    int rowIndex = 0;

    for(int i = 0; i < 3; i++) {

        int sum = 0;

        for(int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }

        printf("Row %d Sum = %d\n", i + 1, sum);

        if(sum > max) {
            max = sum;
            rowIndex = i;
        }
    }

    printf("\nMaximum Row Sum = %d\n", max);
    printf("Row Number = %d\n", rowIndex + 1);

    return 0;
}