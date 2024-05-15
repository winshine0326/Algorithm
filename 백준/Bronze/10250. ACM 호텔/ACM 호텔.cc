#include<stdio.h>
int main(void){
    int t;
    int h,w,n;

    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int num=1,flo=0;
        scanf("%d %d %d",&h,&w,&n);
        for(int j=1;j<=n;j++) {
            flo++;
            if(flo>h){
                flo=1;
                num++;
            }
        }
        if(num<10)
            printf("%d0%d\n",flo,num);
        else
            printf("%d%d\n",flo,num);
    }
    return 0;
}