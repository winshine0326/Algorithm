#include<stdio.h>
int main(void){
    int n,k;
    int arr[1002];
    int count=0;
    scanf("%d %d",&n,&k);
    for(int i=2;i<=n;i++)
        arr[i]=i;
    for(int i=2;i<=n;i++){
        if(arr[i]==i){
            for(int j=i;j<=n;j+=i){
                if(arr[j]==j) {
                    arr[j] = 0;
                    count++;
                    if (count == k) {
                        printf("%d", j);
                        return 0;
                    }
                }
            }
        }
    }
}