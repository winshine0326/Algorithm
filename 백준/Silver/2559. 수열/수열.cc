#include<stdio.h>
int main(void){
    int n,k;
    int temp;
    scanf("%d %d",&n,&k);
    int arr[n];

    for(int i=0;i<n;i++)
        arr[i]=0;

    for(int i=0;i<n;i++) {
        scanf("%d", &temp);
        arr[i]+=temp;
        arr[i+1]+=arr[i];
    }
    int max=arr[k-1];
    for(int i=k-1, j=-1;i<n;i++,j++){
        if((arr[i]-arr[j])>max)
            max=arr[i]-arr[j];
    }
    printf("%d",max);
    return 0;
}