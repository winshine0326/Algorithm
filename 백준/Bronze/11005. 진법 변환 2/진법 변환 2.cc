#include<stdio.h>
#include<string.h>

int main(void){
    int n,b;
    int i=0;
    char result[1000];
    scanf("%d %d",&n,&b);

    while(n>=b){
        if(n%b<10){
            result[i++]=n%b+'0';
        }
        else if(n%b>=10){
            result[i++]=n%b+55;
        }
        n/=b;
    }
    result[i]=(n<10?(n+'0'):(n+55));

    for(int i=strlen(result)-1; i>=0;i--) {
        printf("%c",result[i]);
    }
}