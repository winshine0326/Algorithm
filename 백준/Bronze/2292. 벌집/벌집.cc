#include<stdio.h>
int main(void){
    int n;
    int result=1;
    int sum=0;
    scanf("%d",&n);
    for(int i=1;i<n;i+=sum){
        if (n==1)
            break;
        result++;
        sum+=6;
    }
    printf("%d",result);
}