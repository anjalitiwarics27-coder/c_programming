// #include<stdio.h>
// int power(int a , int b ){
//     int pow=1;
//     for(int i=1;i<=b;i++){
//         pow*=a;
//     }
//     return pow;
// }
// int main(){
//     int a ,b;
//     printf("Enter the base :");
//     scanf("%d",&a);
//     printf("Enter the power :");
//     scanf("%d",&b);
//     int pow=power(a,b);
//     printf("%d the power of %d is : %d",a,b,pow);
//     return 0;
// }


#include<stdio.h>
int power(int a , int b ){
    if(b==0) return 1 ;
    return a* power(a,b-1);
}
int main(){
    int a ,b;
    printf("Enter the base :");
    scanf("%d",&a);
    printf("Enter the power :");
    scanf("%d",&b);
    int pow=power(a,b);
    printf("%d the power of %d is : %d",a,b,pow);
    return 0;
}


