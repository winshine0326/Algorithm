#include<stdio.h>
#include<string.h>

int main(void){
    int n;
    char str[51];
    unsigned len;
    int count,swt;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",str);
        count=0;
        swt=0;
        len = strlen(str);
        for(int j=0;j<len;j++){
            if(str[j]=='(')
                count++;
            else if(str[j]==')')
                count--;

            if(count<0) {
                printf("NO\n");
                break;
            }
        }
        if(count==0)
            printf("YES\n");
        else if(count>0)
            printf("NO\n");
    }
}