// #include<stdio.h>
// int factorial(int x){
//     int fact=1;
//     for(int i=2;i<=x;i++){
//         fact= fact*i;
//     }
//     return fact;
// }
// int combination(int n,int r){
//     int ncr=(factorial(n)/((factorial(r))*(factorial(n-r))));
//     return ncr;
// }
// int main(){
//     int n ,r;
//     printf("Enter n :");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         for(int z=1;z<=n-i;z++){
//             printf(" ");
//         }
//         for(int j =0;j<=i;j++){
//             int icj=combination(i,j);
//             printf(" %d ",icj);
//         }
//         printf("\n");
//     }
//     return 0;
// }
////...............long and time taking process

//ultimate method and good method
//----maths used
// (n-r)!=(n-r)*(n-r-1)!
// ((n-r)!/(n-r))=(n-r-1)!
// ncr+1=n!((r+1)!*(n-r-1)!)
// ncr+1=n!/((r+1)r!((n-r)!/n-r))
// ncr+1=n!(n-r)/((r!(n-r))(r+1))
// ncr+1=ncr*((n-r)/(r+1))---->formula 



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     for(int i =0;i<=n;i++){
//         for(int z=0;z<=n-i;z++){
//             printf(" ");
//         }
//         int first=1;
//         for(int j=0;j<=i;j++){
//             printf("%d ",first);
//             first=first*(i-j)/(j+1); //ic(j+1)
//         }
//         printf("\n");
//     }
//     return 0;
// }



