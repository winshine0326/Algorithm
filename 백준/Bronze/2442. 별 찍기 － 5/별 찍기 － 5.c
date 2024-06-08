#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++,puts("")){
        for(int j=n-i;j>1;j--)
            printf(" ");
        for(int j=n-1;j<n+i+i;j++)
            printf("*");
    }
    return 0;
}