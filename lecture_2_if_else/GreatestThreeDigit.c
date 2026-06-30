// #include<stdio.h>
// int main(){
//     int num1,num2,num3;
//     printf("enter the num1 ,num2,num3 :");
//     scanf("%d%d%d",&num1,&num2,&num3);
//     if((num1>num2)&&(num1>num3)){
//         printf("num1 is greatest : ");
//     }
//     else if ((num2>num1)&&(num2>num3)){
//         printf("num2 is greatest : ");
//     }
//     else{
//         printf("num3 is greatest  ");
//     }
//     return 0;
// }
//.....................2nd method 





//..............wuthout && logic 





// #include<stdio.h>
// int main(){
//     int num1,num2,num3;
//     printf("enter the num1 , num2 and num3 : ");
//     scanf("%d%d%d",&num1,&num2,&num3);
//     if(num1>num2){
//         if(num1>num3){
//             printf("num1 is greatest ");
//         }
//         else{
//             printf("num3 is greatest ");
//         }
//     }
//     else{
//         if(num2>num3){
//             printf("num2 is greatest ");
//         }
//         else{
//             printf("num3 is greatest ");
//         }
//     }
//     return 0;
// }