#include<stdio.h>
int main(void){
    char str[1000000];
    int a[26]={0};
    int strlen=0;
    int max;
    int result=0;

    scanf("%s",str);
    while(str[strlen]!='\0') {
        if(str[strlen]>=97)
            str[strlen]-=32;
        strlen++;
    }

    if(strlen==1) {
        printf("%c", str[strlen - 1]);
        return 0;
    }

    for(int i=0;i<strlen;i++)
        a[str[i]-65]++;


    max=0;

    for(int i=0;i<26;i++){
        if(a[i]>max) {
            max = a[i];
            result=i;
        }
        else if(a[i]==max) {
            result = -2;
        }
    }

    printf("%c",result+65);
}