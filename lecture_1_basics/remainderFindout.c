// #include<stdio.h>
// int main(){
//     int a, b ;
//     printf("enter ist number: ");
//     scanf("%d",&a);
//     printf("enter 2nd number: ");
//     scanf("%d",&b);
//     int q =a/b;
//     int r =a-(b*q);
//     printf("%d",r);
//     return 0;
// }


//.......................formula 


// divisor * quotient + rem = divident 
// rem=divident-divisor * quotient 
// r=a-(b*q)

//............................

//.........................................................2nd method 
// #include<stdio.h>
// int main(){
//     int a , b, rem;
//     printf("enter the ist number : ");
//     scanf("%d",&a);
//     printf("enter the 2nd number:");
//     scanf("%d",&b);
//     rem=a%b;
//     printf("%d",rem);
    
// }


// -----------------------------------
// this concept use when no modulue operator was suggested 



// #include<stdio.h>
// int main(){
//     int a , b;
//     printf("enter dividend : ");
//     scanf("%d",&a);
//     printf("enter divisor :");
//     scanf("%d",&b);
//     int q=a/b;
//     int r =a-b*q;
//     printf(" The remainder when %d is divided by %d is : %d",a,b,r);
//     return 0;
// }