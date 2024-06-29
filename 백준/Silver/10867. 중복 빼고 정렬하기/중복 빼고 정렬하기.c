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
    int arr[100001];
    int temp;

    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        int swt=1;

        scanf("%d", &temp);
        for(int j=0;j<i;j++){
            if(temp==arr[j]){
                swt=0;
                break;
            }
        }
        if(swt){
            arr[i]=temp;
        }
        else{
            n--;
            i--;
        }
    }
    qsort(arr,n,sizeof(int),compare);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}