#include<stdio.h>
int main(void){
    int t;
    int yt=0,mt=0;
    int temp;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&temp);
        for(int j=temp;j>=0;j-=30)
            yt+=10;
        for(int j=temp;j>=0;j-=60)
            mt+=15;
    }
    if(yt<mt)
        printf("Y %d",yt);
    else if(yt>mt)
        printf("M %d",mt);
    else
        printf("Y M %d",yt);
    return 0;
}