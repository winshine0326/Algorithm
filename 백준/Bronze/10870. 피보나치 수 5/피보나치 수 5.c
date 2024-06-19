#include<stdio.h>
int main(void){
    int n;
    int temp=0;
    scanf("%d",&n);
    int arr[21]={0,1};
    for(int i=0;i<=n;i++){
        arr[i+1]+=arr[i]+temp;
        temp=arr[i];
    }
    printf("%d",arr[n]);
    return 0;
}