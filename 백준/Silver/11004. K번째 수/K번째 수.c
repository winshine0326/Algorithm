#include<stdio.h>
#include<stdlib.h>
int arr[5000001];
int compare (const void *a, const void *b)
{
    int num1 = *((int *)a);
    int num2 = *((int *)b);

    return (num1 - num2);
}
int main(void){
    int n,k;

    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    qsort(arr,n,sizeof(int),compare);

    printf("%d",arr[k-1]);
}