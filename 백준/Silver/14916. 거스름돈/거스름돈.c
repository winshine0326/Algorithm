#include<stdio.h>
int main(void){
    int n;
    int result=0;

    scanf("%d",&n);
    while(n>=5){
        n-=5;
        result++;
    }
    while(1) {
        if (n % 2 == 0) break;
        result--;
        if(result<0) break;
        n+=5;
    }
    while(n>=2&&n%2==0){
        n-=2;
        result++;
    }
    if(result<0) printf("-1");
    else printf("%d",result);
}