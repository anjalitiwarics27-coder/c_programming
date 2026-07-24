#include <stdio.h>

int main() {

    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2) {
        printf("Multiplication is not possible.");
        return 0;
    }

    int arr[r1][c1], brr[r2][c2], result[r1][c2];

    printf("Enter first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &brr[i][j]);
        }
    }

    // Matrix Multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {

            result[i][j] = 0;

            for (int k = 0; k < c1; k++) {
                result[i][j] = result[i][j] + arr[i][k] * brr[k][j];
            }
        }
    }

    printf("\nResult Matrix:\n");

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}