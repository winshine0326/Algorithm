#include<stdio.h>

int main(void){
    int n;
    float num[11]={0,};
    int max=0;

    scanf("%d",&n);
    while(n>0){
        num[n%10]++;
        n/=10;
    }
    num[6]+=num[9];
    num[6]/=2;
    num[6]+=0.5;
    for(int i=0;i<9;i++)
        if(max<num[i]) max=num[i];

    if(max==0) printf("1");
    else printf("%d",max);
}