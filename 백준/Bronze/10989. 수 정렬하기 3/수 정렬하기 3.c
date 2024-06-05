#include<stdio.h>
int main(void){
    int t;
    int arr[10001]={0,};
    int temp;

    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        scanf("%d", &temp);
        arr[temp]++;
    }

    for(int i=0;i<=10000;i++) 
        for(int j=0;j<arr[i];j++) 
            printf("%d\n",i);

    return 0;
}