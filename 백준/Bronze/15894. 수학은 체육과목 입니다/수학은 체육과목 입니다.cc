#include<stdio.h>
int main(void){
    long long int n;
    long long int result=0;
    scanf("%lld",&n);
    result+=n;
    for(long long int i=n;i>0;i--)
        result+=3;
    printf("%lld",result);
    return 0;
}