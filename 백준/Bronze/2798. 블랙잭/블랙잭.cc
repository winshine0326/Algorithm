#include<stdio.h>
int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            for(int l=j+1;l<=n;l++){
                int sum=0;
                sum+=arr[i]+arr[j]+arr[l];
                if(sum<=m&&sum>=max){
                    max=sum;
                }
            }
        }
    }
    printf("%d",max);
    return 0;
}