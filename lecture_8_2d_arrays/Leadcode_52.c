#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int a[m][n];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Boundary indices
    int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;

    int total_elements = m * n;
    int count = 0;

    printf("\nSpiral Order Output:\n");

    while (count < total_elements) {
        // 1. Print minimum row (Left to Right)
        for (int j = minc; j <= maxc && count < total_elements; j++) {
            printf("%d ", a[minr][j]);
            count++;
        }
        minr++;

        // 2. Print maximum column (Top to Bottom)
        for (int i = minr; i <= maxr && count < total_elements; i++) {
            printf("%d ", a[i][maxc]);
            count++;
        }
        maxc--;

        // 3. Print maximum row (Right to Left)
        for (int j = maxc; j >= minc && count < total_elements; j--) {
            printf("%d ", a[maxr][j]);
            count++;
        }
        maxr--;

        // 4. Print minimum column (Bottom to Top)
        for (int i = maxr; i >= minr && count < total_elements; i--) {
            printf("%d ", a[i][minc]);
            count++;
        }
        minc++;
    }

    printf("\n");
    return 0;
}