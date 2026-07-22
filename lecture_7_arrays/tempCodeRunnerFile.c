
    bool flag = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            flag++;
            break;
        }
    }
    if(flag == 0){
        printf("The element is not present %d ",k);
    }
    else{
        printf("The element is present %d",k);
    }
    return;
}
int main(){
    int n,k;
    printf("Enter the arrays size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the search element :");
    scanf("%d",&k);
    check(n,arr,k);
}