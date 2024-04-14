#include<stdio.h>
int main(void){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int Q=0,D=0,N=0,P=0;
        scanf("%d",&n);
        while(n>=25){
            n-=25;
            Q++;
        }
        while(n>=10){
            n-=10;
            D++;
        }
        while(n>=5){
            n-=5;
            N++;
        }
        while(n>=1){
            n--;
            P++;
        }
        printf("%d %d %d %d\n",Q,D,N,P);
    }

}