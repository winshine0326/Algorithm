#include<stdio.h>
int main(void){
    char str[16];
    int j=0;
    int result=0;

    scanf("%s",str);
    while(str[j]!='\0'){
        if((str[j]-64)<=3)
            result+=3;
        else if((str[j]-64)<=6)
            result+=4;
        else if((str[j]-64)<=9)
            result+=5;
        else if((str[j]-64)<=12)
            result+=6;
        else if((str[j]-64)<=15)
            result+=7;
        else if((str[j]-64)<=19)
            result+=8;
        else if((str[j]-64)<=22)
            result+=9;
        else
            result+=10;
        j++;
    }

    printf("%d",result);
    return 0;
}