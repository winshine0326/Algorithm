#include<stdio.h>
int main(void){
    int n;
    int cnt1=0,cnt2=0;

    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int x=i;
        while(!(x%2)){
            cnt1++;
            x/=2;
        }
        while(!(x%5)){
            cnt2++;
            x/=5;
        }
    }
    printf("%d\n",cnt1<cnt2?cnt1:cnt2);
}