#include<stdio.h>
int main(void){
    int n;
    int stack[100001]={0,};
    scanf("%d",&n);
    int num;
    int pre=0,result=0;

    for(int i=0;i<n;i++){
        scanf("%d",&num);
        pre++;
        if(!num){
            pre--;
            stack[pre]=0;
            pre--;
        }
        else
            stack[pre] = num;
    }
    for(int i=1;i<=n;i++) result+=stack[i];
    printf("%d",result);
}