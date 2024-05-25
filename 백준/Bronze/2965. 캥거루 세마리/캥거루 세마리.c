#include<stdio.h>
int main(void){
    int a,b,c;
    int max;
    scanf("%d %d %d",&a,&b,&c);
    if(b-a>c-b) max=b-a;
    else max=c-b;
    printf("%d",max-1);
    return 0;
}