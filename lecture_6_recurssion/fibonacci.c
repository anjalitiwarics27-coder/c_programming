#include<stdio.h>
int fabbo(int n ){
    if(n==1||n==2) return 1;
    int ans1 = fabbo(n-1);
    int ans2 = fabbo(n-2);
    int ans = ans1 + ans2;
    return ans;
}
int main(){
    int n;
    printf("Enter the series :");
    scanf("%d",&n);
    int fabonacci=fabbo(n);
   // printf("%d",fabonacci);
    return 0;
}