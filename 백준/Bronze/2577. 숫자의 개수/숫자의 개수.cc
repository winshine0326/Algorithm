#include<stdio.h>
int main(void){
    int a,b,c;
    int num[10]={};
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    long int sum=a*b*c;

    while(sum>0) {
        num[sum % 10]++;
        sum/=10;
    }

    for(int i=0;i<10;i++)
        printf("%d\n",num[i]);
    
    return 0;
}