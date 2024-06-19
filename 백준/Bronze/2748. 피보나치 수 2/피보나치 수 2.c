#include<stdio.h>
int main(void){
    int n;
    long long int temp=0;
    scanf("%d",&n);
    long long int arr[100]={0,1};
    for(int i=0;i<=n;i++){
        arr[i+1]+=arr[i]+temp;
        temp=arr[i];
    }
    printf("%lld",arr[n]);
    return 0;
}