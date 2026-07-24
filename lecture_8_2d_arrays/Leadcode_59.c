#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;

    int num = 1;

    while (top <= bottom && left <= right)
    {
        // Left -> Right
        for (int j = left; j <= right; j++)
            a[top][j] = num++;
        top++;

        // Top -> Bottom
        for (int i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;

        // Right -> Left
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
                a[bottom][j] = num++;
            bottom--;
        }

        // Bottom -> Top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                a[i][left] = num++;
            left++;
        }
    }

    // Print Matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%3d ", a[i][j]);
        printf("\n");
    }

    return 0;
}