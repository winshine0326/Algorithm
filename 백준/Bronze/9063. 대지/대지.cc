#include<stdio.h>
int main(void){
    int t;
    int x,y;
    int Xmax=-100001,Ymax=-100001;
    int Xmin=100001,Ymin=100001;

    scanf("%d",&t);

    for(int i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        if(x>Xmax)
            Xmax=x;
        if(x<Xmin)
            Xmin=x;
        if(y>Ymax)
            Ymax=y;
        if(y<Ymin)
            Ymin=y;
    }

    printf("%d",(Xmax-Xmin)*(Ymax-Ymin));

    return 0;
}