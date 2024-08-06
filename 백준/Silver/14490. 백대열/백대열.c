#include<stdio.h>
int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
};
int main(void){
    int a,b;
    int gcdn;
    scanf("%d:%d",&a,&b);
    gcdn=gcd(a,b);
    printf("%d:%d",a/gcdn,b/gcdn);
}