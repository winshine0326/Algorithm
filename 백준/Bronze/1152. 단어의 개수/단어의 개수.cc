#include<stdio.h>
int main(void){
    char str[1000000];
    int result=1;
    int j=0;

    scanf("%[^\n]s",str);

    while (str[j]!='\0'){
        if(str[j]==32)
            result++;
        j++;
    }
    if (str[0]==32)
        result--;

    if (str[j - 1] == 32)
        result--;

    printf("%d",result);

    return 0;
}