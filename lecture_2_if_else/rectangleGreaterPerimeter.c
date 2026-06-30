#include<stdio.h>
int main (){
    int l , b ,area , perimeter ;
    printf("Enter the lenght and breadth : ");
    scanf("%d%d",&l,&b);
    area = l * b ;
    perimeter = 2 * ( l + b ) ;
    if(area > perimeter){
        printf("area is greater : %d ", area );
    } 
    else{
        printf("perimeter is greater : %d ", perimeter);
    }
    return 0; 
}