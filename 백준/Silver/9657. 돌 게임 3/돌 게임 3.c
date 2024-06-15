#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    printf("%s",n%7==2||n%7==0?"CY":"SK");
    return 0;
}