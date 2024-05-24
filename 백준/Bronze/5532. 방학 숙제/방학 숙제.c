#include<stdio.h>
int main(void){
    int a,b,c,d,l;
    int kor,math;
    scanf("%d %d %d %d %d",&l,&a,&b,&c,&d);
    kor=a/c+(a%c>0?1:0);
    math=b/d+(b%d>0?1:0);
    printf("%d",l-(kor>math?kor:math));
    return 0;
}