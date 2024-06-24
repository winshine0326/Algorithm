#include<stdio.h>
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}

int main(void){
    int n;
    int a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n",lcm(a, b));
    }
}