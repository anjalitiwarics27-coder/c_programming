#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int a[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int j = 0; j < n; j++) {

        if (j % 2 == 0) {
            // Bottom to Top
            for (int i = m - 1; i >= 0; i--) {
                printf("%d ", a[i][j]);
            }
        } else {
            // Top to Bottom
            for (int i = 0; i < m; i++) {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}