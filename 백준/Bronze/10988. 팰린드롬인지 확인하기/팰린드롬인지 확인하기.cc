#include<stdio.h>
int main(void){

    char str[101];
    int a=0;
    int result=1;

    scanf("%s",str);

    while(str[a]!='\0')
        a++;

    a--;

    for(int i=0;i<=a;i++) {
        if (str[i] != str[a]) {
            result=0;
            break;
        }
        a--;
    }
    printf("%d",result);

    return 0;
}