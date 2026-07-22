#include <stdio.h>

void check(int arr[]) {
    int isPalindrome = 1; // Assume it's a palindrome initially

    // We only need to check up to the middle (index 3)
    for (int i = 0; i < 7 / 2; i++) {
        if (arr[i] != arr[6 - i]) {
            isPalindrome = 0; // Found a mismatch
            break;
        }
    }

    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
}

int main() {
    int arr[7] = {1, 2, 3, 4, 3, 2, 1};
    check(arr);
    return 0;
}