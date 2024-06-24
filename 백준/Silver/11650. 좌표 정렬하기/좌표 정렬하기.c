#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int x;
    int y;
}position;

int compare (const void *a, const void *b)
{
    int num1 = ((position *)a)->x;
    int num2 = ((position *)b)->x;
    if(num1==num2) return ((((position *)a)->y)-(((position *)b)->y));

    return (num1 - num2);
}
int main(void){
    int n;
    position arr[100001];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d %d",&arr[i].x,&arr[i].y);

    qsort(arr,n,sizeof(position),compare);

    for(int i=0;i<n;i++)
        printf("%d %d\n",arr[i].x,arr[i].y);
}