#include<stdio.h>
int main(void){
    int n,k;
    int count=0;
    int result;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        if(n%i==0)
            count++;
        if(count==k) {
            printf("%d",i);
            return 0;
        }
    }
    printf("%d",0);
    return 0;
}