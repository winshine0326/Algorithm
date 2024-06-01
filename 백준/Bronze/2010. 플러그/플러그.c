#include<stdio.h>
int main(void){
    int t;
    int n;
    int result=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        result+=n-1;
    }
    printf("%d",result+1);
}