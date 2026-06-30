// #include<stdio.h>
// int main(){
//     int s1,s2,s3;
//     printf("enter the side1 ,  side2  , side3 :");
//     scanf("%d%d%d",&s1,&s2,&s3);
//     if(((s1+s2)>s3) && ((s2+s3)>s1) && ((s3+s1)>s2)){
//         printf(" this is a triangle ");
//     }
//     else{
//         printf("it is not a valid triangle : ");
//     }
//     return 0;
// }


//.............without && operator 



// #include<stdio.h>
// int main(){
//     int s1 , s2 , s3;
//     printf("enter the side1, side2 ,side3 : ");
//     scanf("%d%d%d",&s1,&s2,&s3);
//     if((s1+s2)>s3){
//         if((s2+s3)>s1){
//             if((s3+s1)>s2){
//                 printf("valid triangle :");
//             }
//             else{
//                 printf("invalid triangle : ");
//             }
//         }
//         else{
//             printf("invalid triangle: ");
//         }
//     }
//     else{
//         printf("invalid traingle : ");
//     }
//     return 0;
// }


// ..............3rd method


#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("enter the side1 side2 side3 :");
    scanf("%d%d%d",&s1,&s2,&s3);
    if((s1+s2)<s3){
        printf("invalid triangle: ");
    }
    else if((s2+s3)<s1){
        printf("invalid triangle:");
    }
    else if((s1+s3)<s2){
        printf("invalid triangle :");
    }
    else{
        printf("valid triangle : ");
    }
    return 0;
}








