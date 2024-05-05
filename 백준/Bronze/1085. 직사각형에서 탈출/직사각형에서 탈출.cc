#include<stdio.h>
int main(void){
    int x,y,w,h;
    int Xmin;
    int Ymin;
    
    scanf("%d %d %d %d",&x,&y,&w,&h);
    
    if (x<w-x)
        Xmin=x;
    else
        Xmin = w-x;

    if(y<h-y)
        Ymin=y;
    else
        Ymin=h-y;

    printf("%d",Xmin<Ymin?Xmin:Ymin);
    
    return 0;
}