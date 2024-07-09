#include<stdio.h>
#include<stdlib.h>

int compare (const void *a, const void *b)
{
    int num1 = *((int *)a);
    int num2 = *((int *)b);

    return (num2 - num1);
}

int arr[1000001];
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);

    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}