#include<stdio.h>
int main(void){
    int a,b,c;
    int result;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a<c)
            result=a;
        else if(c>b)
            result=c;
        else
            result=b;
    }
    else{
        if(b<c)
            result=b;
        else if(a<c)
            result=c;
        else
            result=a;
    }
    printf("%d",result);
}