#include<stdio.h>
#include<stdlib.h>
int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int binary(int arr[],int start,int end,int find){
    int index = (end+start)/2;
    if(arr[index]==find)
        return 1;
    if(start>end)
        return 0;
    if(arr[index]>find){
        return binary(arr,start,index-1,find);
    }
    else{
        return binary(arr,index+1,end,find);
    }
}



int main(void){
    int n;
    int x;
    int s;

    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&x);
        arr[i]=x;
    }

    qsort(arr,n,sizeof(int),compare);

    scanf("%d",&s);
    for (int i=0;i<s;i++){
        scanf("%d",&x);
        printf("%d\n",binary(arr,0,n-1,x));
    }


}