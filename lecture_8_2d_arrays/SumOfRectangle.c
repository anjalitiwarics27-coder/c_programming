#include <stdio.h>

int main() {
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int arr[row][col];

    // Input Matrix
    printf("Enter matrix elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Coordinates
    int l1, r1, l2, r2;

    printf("Enter starting coordinate (l1 r1): ");
    scanf("%d %d", &l1, &r1);

    printf("Enter ending coordinate (l2 r2): ");
    scanf("%d %d", &l2, &r2);

    int sum = 0;

    // Rectangle Sum
    for (int i = l1; i <= l2; i++) {
        for (int j = r1; j <= r2; j++) {
            sum += arr[i][j];
        }
    }

    printf("Rectangle Sum = %d\n", sum);

    return 0;
}