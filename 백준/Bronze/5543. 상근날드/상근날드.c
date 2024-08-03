#include<stdio.h>
int main(void){
    int minh=3000;
    int mind=3000;
    int n;
    for(int i=0;i<3;i++){
        scanf("%d",&n);
        if(n<minh) minh=n;
    }
    for(int i=0;i<2;i++){
        scanf("%d",&n);
        if(n<mind) mind=n;
    }
    printf("%d",minh+mind-50);
}