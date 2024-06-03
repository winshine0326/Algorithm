#include<stdio.h>
#include<string.h>
int main(void){
    int t;
    char name[100];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",name);
        getchar();
        unsigned namelen=strlen(name);
        for(int j=0;j<namelen;j++){
            if(name[j]<='Z') name[j]+=32;
        }
        printf("%s\n",name);
    }
}