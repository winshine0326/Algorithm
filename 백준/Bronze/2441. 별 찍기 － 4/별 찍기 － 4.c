#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--,puts("")){
        for(int j=0;j<n-i;j++)
            printf(" ");
        for(int j=i;j>0;j--)
            printf("*");
    }
    return 0;
}