#include<stdio.h>
long long int gcd(long long int a,long long int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
long long int lcm(long long int a,long long int b){
    return a*b/gcd(a,b);
}
int main(void){
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",lcm(a,b));
}