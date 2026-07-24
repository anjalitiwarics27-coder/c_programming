#include<stdio.h>

int main() {
    int rows, col;

    printf("Enter the rows: ");
    scanf("%d", &rows);

    printf("Enter the columns: ");
    scanf("%d", &col);

    int arr[rows][col];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < col; j++) {
            printf("Enter element at row %d and col %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}