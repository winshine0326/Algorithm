#include<stdio.h>
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",a+b-c);
    int temp=b;
    int sum=1;
    while(temp>=10){
        sum*=10;
        temp/=10;
    }
    printf("%d",a*10*sum+b-c);
    return 0;
}