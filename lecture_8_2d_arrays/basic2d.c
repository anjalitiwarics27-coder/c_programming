#include <stdio.h>
int main() {
    int arr[2][2];
    // Value assignment
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[1][0] = 3;
    arr[1][1] = 4;    
    // Printing in 2D Matrix format
    for (int i = 0; i < 2; i++) {       // Row loop
        for (int j = 0; j < 2; j++) {   // Column loop
            printf("%d ", arr[i][j]);
        }
        printf("\n");                   // Har row ke baad new line
    }
    
    return 0;
}


// 1 2
// 3 4 