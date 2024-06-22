#include<stdio.h>
typedef struct{
    int t;
    int w;
    int num;
}man;
int main(void){
    int n;
    man arr[51];
    scanf("%d",&n);
    for(int i=0;i<n;i++) arr[i].num=1;

    for(int i=0;i<n;i++)
        scanf("%d %d",&arr[i].w,&arr[i].t);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(arr[i].t<arr[j].t&&arr[i].w<arr[j].w)
                arr[i].num++;

    for(int i=0;i<n;i++)
        printf("%d ",arr[i].num);
}