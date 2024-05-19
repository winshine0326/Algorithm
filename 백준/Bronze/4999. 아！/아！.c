#include<stdio.h>
#include<string.h>
int main(void){
    char jhs[10000];
    char drs[10000];
    scanf("%s",jhs);
    scanf("%s",drs);
    unsigned jhslen=strlen(jhs);
    unsigned drslen=strlen(drs);

    printf("%s",jhslen>=drslen?"go":"no");
    return 0;
}