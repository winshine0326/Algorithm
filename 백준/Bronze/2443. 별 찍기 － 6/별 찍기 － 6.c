#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--,puts("")){
        for(int j=i;j<n;j++)
            printf(" ");
        for(int j=i*2-1;j>0;j--)
            printf("*");
    }
    return 0;
}