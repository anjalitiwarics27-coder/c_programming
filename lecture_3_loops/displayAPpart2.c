// q. display this ap -> 4,7,10,13,16..up to 'n' terms .
// a=4
// d=3
// a+(n-1)d
// 4+(n-1)3
// 4+3n-3
// 3n+1

//..............solution 



// #include<stdio.h>
// int main(){
//     int n ;
//     printf("enter the number : ");
//     scanf("%d",&n);
//     for(int i=4 ;i<=3*n+1;i=i+3){
//         printf("%d\n",i);
//     }
//     return 0;
// }


// .........simple method 


// #include<stdio.h>
// int main(){
//     int n ;
//     printf("enter a number :");
//     scanf("%d",&n);
//     int a =4;
//     for(int i =1;i<=n;i++){
//         printf("%d\n",a);
//         a=a+3;
//     }
//     return 0;
// }