#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++,puts("")){
        for(int j=0;j<=i;j++)
            printf("*");
        for(int j=2;j<(n-i)*2;j++)
            printf(" ");
        for(int j=0;j<=i;j++)
            printf("*");
    }
    for(int i=n-1;i>0;i--,puts("")){
        for(int j=0;j<i;j++)
            printf("*");
        for(int j=0;j<(n-i)*2;j++)
            printf(" ");
        for(int j=0;j<i;j++)
            printf("*");
    }
    return 0;
}