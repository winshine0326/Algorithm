#include<stdio.h>
int main(void){
    int n;
    int minguk=0,mansae=0;
    for(int i=0;i<4;i++) {
        scanf("%d",&n);
        minguk+=n;
    }
    for(int i=0;i<4;i++) {
        scanf("%d",&n);
        mansae+=n;
    }
    printf("%d",minguk>=mansae?minguk:mansae);
}