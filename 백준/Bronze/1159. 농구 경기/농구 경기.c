#include<stdio.h>
int main(void){
    int t;
    char name[31];
    int swt=0;
    int alpha[26]={0,};
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",name);
        getchar();
        alpha[name[0]-'a']++;
    }
    for(int i=0;i<26;i++) {
        if (alpha[i] >= 5) {
            printf("%c", 'a' + i);
            swt=1;
        }
    }
    if(swt==0)
        printf("PREDAJA");

    return 0;
}