// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for(int i=1;i<=2*n-1;i=i+2){
//         for(int j=1;j<=i;j+=2){
//             printf("%d ", j);
//            // j=j+2;
//         }
//         printf("\n");
//     }
//     return 0;
// }


// ---------ap formula 
//   an=1+(n-1)*2
//   =2*n-1

//     ...............2nd method

//  #include<stdio.h>
//  int main(){
//     int n;
//     printf("how many rows you want to print: ");
//     scanf("%d",&n);   
//     for(int i=1;i<=n;i++){
//         int a =1;
//         for(int j=1;j<=i;j++){
//             printf("%d ", a);
//             a=a+2;
//         }
//         printf("\n");
//     }
//     return 0;
//  }