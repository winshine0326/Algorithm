#include<stdio.h>
int main(void){
    int n;
    int arr[51];
    int max;
    int result=0;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    max = 1;

    while(1){
        for (int j = 1; j < n; j++)
            if (arr[max] < arr[j]) max = j;
        if(arr[0]>arr[max]) break;
        arr[max]--;
        arr[0]++;
        result++;
    }

    printf("%d",result);
}