#include<stdio.h>
#include<string.h>

int main(void){
    int t;
    char ox[100];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int result=0;
        int temp=1;
        scanf("%s",ox);
        getchar();
        unsigned len=strlen(ox);
        for(unsigned j=0;j<len;j++){
            if(ox[j]=='O'){
                result+=temp;
                temp++;
            }
            else
                temp=1;
        }
        printf("%d\n",result);
    }
    return 0;
}