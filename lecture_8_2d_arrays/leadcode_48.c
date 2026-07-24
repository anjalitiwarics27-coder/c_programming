#include<stdio.h>

int main() {
    int r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    // Check for square matrix
    if(r != c) {
        printf("Transpose and 90-degree rotation are possible only for square matrices.\n");
        return 0;
    }

    int arr[r][c];

    printf("Enter the matrix elements:\n");

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Original Matrix
    printf("\nOriginal Matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Transpose
    for(int i = 0; i < r; i++) {
        for(int j = i; j < c; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Print Transpose
    printf("\nTranspose Matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Reverse each row (90° Clockwise Rotation)
    for(int i = 0; i < r; i++) {
        int j = 0;
        int k = c - 1;

        while(j < k) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;

            j++;
            k--;
        }
    }

    // Print Rotated Matrix
    printf("\n90 Degree Clockwise Rotation:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}