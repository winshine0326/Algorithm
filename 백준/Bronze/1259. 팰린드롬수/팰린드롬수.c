#include<stdio.h>
#include<string.h>
int main(void){
    char str[100000];
    while(1){
        int swt=1;
        scanf("%s",str);
        unsigned len=strlen(str);
        if("%c",str[len-1]=='0'&&str[0]=='0') break;
        for(int i=0;i<len/2;i++){
            if(str[i]!=str[len-1-i]) {
                swt = 0;
                break;
            }
        }
        printf("%s\n",swt==1?"yes":"no");
    }
    return 0;
}