#include<stdio.h>
#include<string.h>


int main(void){
    int alpha[27][2000]={};
    char s[2002];
    int q;
    char c;
    int a,b;

    scanf("%s",s);
    alpha[s[0]-'a'][0]=1;

    for(int i=1;i<strlen(s);i++){
        for(int j=0;j<27;j++){
            alpha[j][i]=alpha[j][i-1];
        }
        alpha[s[i]-'a'][i]++;
    }

    scanf("%d",&q);
    for(int i=0;i<q;i++){
        getchar();
        scanf("%c",&c);
        scanf("%d %d",&a,&b);
        if(a==0) {
            printf("%d\n", alpha[c - 'a'][b]);
        }else{
            printf("%d\n",alpha[c-'a'][b]-alpha[c-'a'][a-1]);
        }

    }

    return 0;
}
