#include<stdio.h>
int main(void){
    char str[100];
    int result=0;
    scanf("%s",str);

    for(int i=0;i<=result;i++){
        if(str[i]!='\0')
            result++;
    }
    printf("%d",result);

    return 0;
}