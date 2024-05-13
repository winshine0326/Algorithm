#include<stdio.h>
int main(void){
    long long int n;
    scanf("%lld",&n);
    printf("%lld\n%d\n",(n-1)*n/2,2);
    return 0;
}