// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the layers of star you want to print : ");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf("   ");
//         }
//         for(int j=1;j<=i;j++){
//             printf(" * ");
//         }
//         for (int k=2;k<=i;k++){
//             printf(" * ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//.........2nd method

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter no. of lines : ");
//     scanf("%d", &n);
    
//     int nst = 1;       // Start with 1 star on the first row
//     int nsp = n - 1;   // Initial spaces depend on total rows 'n'
    
//     for(int i = 1; i <= n; i++){
        
//         // 1. Print Spaces
//         for(int j = 1; j <= nsp; j++){ 
//             printf(" ");
//         }
        
//         // 2. Print Stars
//         for(int k = 1; k <= nst; k++){
//             printf("*");
//         }
        
//         // 3. Move to the next line and update counts
//         printf("\n");
//         nsp = nsp - 1;  // Decrement spaces for the next row
//         nst = nst + 2;  // Increment stars by 2 to form a pyramid (1, 3, 5, 7...)
//     }
    
//     return 0;
// }