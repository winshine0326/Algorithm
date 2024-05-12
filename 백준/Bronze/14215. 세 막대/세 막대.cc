#include<stdio.h>
int main(void) {
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    int max=a>b?(a>c?a:c):(b>c?b:c);
    int sum = a+b+c;
    int left = sum-max;

    while(max>=left)
        max--;

    printf("%d",max+left);
    return 0;
}