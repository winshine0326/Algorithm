#include<stdio.h>
int main(void){
    int t;
    int arr[1001];
    int temp;

    scanf("%d",&t);
    for(int i=0;i<t;i++)
        scanf("%d", &arr[i]);

    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<t;i++)
        printf("%d\n",arr[i]);
    
    return 0;
}