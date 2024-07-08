#include<stdio.h>
#include<stdlib.h>
int compare (const void *a, const void *b)
{
    int num1 = *((int *)a);
    int num2 = *((int *)b);

    return (num1 - num2);
}

int main(void){
    int arr[1001];
    int n,l;

    scanf("%d %d",&n,&l);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);

    for(int i=0;i<n;i++){
        if(arr[i]<=l) 
            l++;
    }

    printf("%d",l);
}