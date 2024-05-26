#include<stdio.h>
int main(void){
    int temp;
    int result=0;
    for(int i=0;i<5;i++) {
        scanf("%d",&temp);
        result+=temp;
    }
    printf("%d",result);
    return 0;
}