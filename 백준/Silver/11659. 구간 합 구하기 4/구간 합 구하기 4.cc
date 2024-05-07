#include<stdio.h>
int main(void){
    int n,m;
    int temp;
    int a,b;

    scanf("%d %d",&n,&m);
    int arr[n];

    for(int i=0;i<n;i++)
        arr[i]=0;
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        arr[i]+=temp;
        arr[i+1]+=arr[i];
    }
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        if(a==1)
            printf("%d\n",arr[b-1]);
        else
            printf("%d\n",arr[b-1]-arr[a-2]);
    }
    return 0;
}