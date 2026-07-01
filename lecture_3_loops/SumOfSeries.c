// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     //1-2+3-4...n terms 
//     // odd numbers -->add 
//     // evem numbers -->sub
//     int sum =0;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0)sum=sum+i;
//         if(i%2==0)sum =sum-i;
//     }
//     printf("ths sum is :%d",sum);
//     return 0;
// }

//---------------------------------------------

#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    //1-2+3-4...n terms 
    // odd numbers -->add 
    // evem numbers -->sub
    int sum =0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum=(-n)/2;
        }
        else{
            sum =-n/2+n;
        }
    }
    printf("ths sum is :%d",sum);
    return 0;
}


