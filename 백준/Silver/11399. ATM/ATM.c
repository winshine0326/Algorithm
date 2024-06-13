#include<stdio.h>
int main(void){
    int arr[1001]={0,};
    int n;
    int result=0;
    int min,temp,temp2=0;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++)
            if(arr[min]>arr[j])
                min=j;
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }


    for(int i=0;i<n;i++){
        arr[i]+=temp2;
        temp2=arr[i];
    }
    for(int i=0;i<n;i++)
        result+=arr[i];

    printf("%d",result);
}