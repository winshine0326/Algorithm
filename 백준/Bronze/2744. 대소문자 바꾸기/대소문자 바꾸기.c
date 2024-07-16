#include<stdio.h>
#include<string.h>

int main(void){
    char str[1000];
    scanf("%s",str);
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]>='A'&&str[i]<'a')
            printf("%c",str[i]+32);
        else
            printf("%c",str[i]-32);
    }
}