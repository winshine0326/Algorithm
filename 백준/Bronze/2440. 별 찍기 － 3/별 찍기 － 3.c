#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--,puts(""))
        for(int j=i;j>0;j--)
            printf("*");
}