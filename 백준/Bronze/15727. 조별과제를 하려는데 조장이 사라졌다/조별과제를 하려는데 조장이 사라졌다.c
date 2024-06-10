#include<stdio.h>
int main(void){
    int n;
    int result=0;
    scanf("%d",&n);
    while(n>=5){
        n-=5;
        result++;
    }
    while(n>=4){
        n-=4;
        result++;
    }
    while(n>=3){
        n-=3;
        result++;
    }
    while(n>=2){
        n-=2;
        result++;
    }
    while(n>=1){
        n-=1;
        result++;
    }
    printf("%d",result);
}