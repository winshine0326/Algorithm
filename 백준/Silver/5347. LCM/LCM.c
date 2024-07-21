#include<stdio.h>

long long int gcd(long long int a,long long int b){
    if(!b) return a;
    return gcd(b,a%b);
}
long long int lcm(long long int a,long long int b){
    return a*b/gcd(a,b);
}

int main(void){
    int n;
    long long int a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",lcm(a,b));
    }
}