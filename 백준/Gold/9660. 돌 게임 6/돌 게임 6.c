#include<stdio.h>
int main(void){
    long long int n;
    scanf("%lld",&n);
    printf("%s",n%7==2||n%7==0?"CY":"SK");
    return 0;
}