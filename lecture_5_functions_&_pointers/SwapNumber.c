//..............Method 1 

// #include<stdio.h>
// int swap(int n1, int n2){
//     int temp ;
//     temp=n1;
//     n1=n2;
//     n2=temp;
//     printf("value of n1 : %d\n",n1);
//     printf("value of n2 : %d\n",n2); 

// }
// int main(){
//     int n1,n2 ;
//     printf("Enter number1 :");
//     scanf("%d",&n1);
//     printf("Enter the number2 :");
//     scanf("%d",&n2);
//     int interchange = swap(n1,n2);  
// }

//...............Method 2(without use extra variable )

#include<stdio.h>
int swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Enter the num1: %d ",a);
    printf("Enter the num2: %d ",b);
  
}
int main(){
    int n1,n2;
    printf("Enter the num1 :");
    scanf("%d",&n1);
    printf("Enter the num2 :");
    scanf("%d",&n2);
    int change=swap(n1,n2);
   // return 0;
}
