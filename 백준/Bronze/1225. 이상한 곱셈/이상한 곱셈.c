#include <stdio.h>
#include <string.h>
int main(void){
    char a[10001],b[10001];
    long long int alen,blen;
    long long int result=0;
    scanf("%s %s",a,b);

    alen=strlen(a);
    blen=strlen(b);

    for(long long int i=0;i<alen;i++)
        for(long long int j=0;j<blen;j++)
            result+=(a[i]-'0')*(b[j]-'0');

    printf("%lld",result);
    return 0;
}