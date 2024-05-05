#include<stdio.h>
int main(void){
    int x[3],y[3];
    int Xdiff,Ydiff;

    for(int i=0;i<3;i++)
        scanf("%d %d",&x[i],&y[i]);

    if(x[0]==x[1])
        Xdiff=x[2];
    else{
        if(x[0]==x[2])
            Xdiff=x[1];
        else
            Xdiff=x[0];
    }

    if(y[0]==y[1])
        Ydiff=y[2];
    else{
        if(y[0]==y[2])
            Ydiff=y[1];
        else
            Ydiff=y[0];
    }

    printf("%d %d",Xdiff,Ydiff);

    return 0;
}