//..............concept 
// 1,3,5,7,9,11,13.........
// a,a+d,a+2d,a+3d,a+4d...........a+(n-1)d
// a=first term 
// d=common difference 
// nth term = a+(n-1)d
// an=1+(n-1)2
// 1+2n-2=2n-1

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     for(int i=1;i<=2*n-1;i=i+2){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// ...............user input 

// #include<stdio.h>
// int main(){
//     int n,d;
//     printf("enter a number :");
//     scanf("%d",&n);
//     printf("enter the differences ");
//     scanf("%d",&d);
//     for(int i=1;i<=1+(n-1)*d;i=i+d){
//         printf("%d\n",i);
//     }
//     return 0;
// }