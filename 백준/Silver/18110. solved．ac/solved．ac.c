#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int compare (const void *a, const void *b)
{
    return *(double*)a-*(double*)b;
}

int main(void){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0");
        return 0;
    }
    double arr[n];
    for(int i=0;i<n;i++)
        scanf("%lf",&arr[i]);
    qsort(arr,n,sizeof(double),compare);
    double top=round(n*0.15);
    double resize=n-top*2;
    double sum=0;
    for(int i=top;i<n-top;i++)
        sum+=arr[i];
    sum=round(sum/resize);
    printf("%.0lf",sum);
    return 0;
}