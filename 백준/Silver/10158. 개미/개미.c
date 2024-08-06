#include<stdio.h>
int main(void){
    int w,h;
    int p,q;
    int t;
    int x,y;
    int dx,dy;

    scanf("%d %d",&w,&h);
    scanf("%d %d",&p,&q);
    scanf("%d",&t);

    dx = (p+t)/w;
    x = (p+t)%w;
    dy = (q+t)/h;
    y = (q+t)%h;

    if(dx%2)
        x=w-x;
    if(dy%2)
        y=h-y;

    printf("%d %d",x,y);
}