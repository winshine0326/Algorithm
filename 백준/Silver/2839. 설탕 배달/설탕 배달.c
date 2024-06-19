#include<stdio.h>
int main(void){
    int n,min;
    int temp;
    int arr[2]={5,3};
    int a[2]={0,};
    scanf("%d",&n);
    for(int i=0;i<2;i++)
        a[i]=n/arr[i];

    min = 5000;

    for(int i=0;i<=a[0];i++){
        for(int j=0;j<=a[1];j++){
            if(n==arr[0]*i+arr[1]*j)
                temp=i+j;
            if(min>temp) min=temp;
        }
    }

    if(min==5000) printf("-1");
    else printf("%d",min);
}