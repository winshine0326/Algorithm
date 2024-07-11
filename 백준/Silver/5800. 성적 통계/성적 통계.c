#include<stdio.h>
#include<stdlib.h>

int compare (const void *a, const void *b)
{
    int num1 = *((int *)a);
    int num2 = *((int *)b);

    return (num1 - num2);
}

int main(void){
    int n,m;
    int max,num,temp;
    int arr[101][51];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
        qsort(arr[i],m,sizeof(int),compare);
        max=arr[i][1]-arr[i][0];
        for(int j=0;j<m;j++) {
            num = arr[i][j+1]-arr[i][j];
            if(num>max){
                temp=num;
                num=max;
                max=temp;
            }
        }
        printf("Class %d\n",i+1);
        printf("Max %d, Min %d, Largest gap %d\n",arr[i][m-1],arr[i][0],max);
    }
}