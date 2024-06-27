#include<stdio.h>
#include<stdlib.h>
int compare (const void *a, const void *b)
{
    int num1 = *((int *)a);
    int num2 = *((int *)b);

    return (num1 - num2);
}
int main(void){
    int n;
    int arr[12]={0,};
    int i=0;
    int max,temp1;
    int count=0;
    scanf("%d",&n);
    int temp=n;
    while(temp>0){
        arr[i]=temp%10;
        temp/=10;
        count++;
        i++;
    }

    for(int j=0;j<count;j++){
        max=j;
        for(int k=j;k<count;k++){
            if(arr[k]>arr[max])
                max=k;
        }
        temp1=arr[max];
        arr[max]=arr[j];
        arr[j]=temp1;
    }
    for(int j=0;j<count;j++){
        printf("%d",arr[j]);
    }
}