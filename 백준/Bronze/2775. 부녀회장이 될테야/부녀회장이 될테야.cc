#include<stdio.h>

int arr[15][15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};

int main(void){
    int t;
    int k,n;
    scanf("%d",&t);


    for(int i=1;i<15;i++){
        for(int j=1;j<15;j++){
            arr[i][j]+=arr[i-1][j]+arr[i][j-1];
        }
    }
    for(int i=0;i<t;i++){
        scanf("%d",&k);
        scanf("%d",&n);
        printf("%d\n",arr[k][n]);
    }
    return 0;
}
