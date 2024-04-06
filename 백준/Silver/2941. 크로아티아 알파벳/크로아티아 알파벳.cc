#include<stdio.h>
int main(void){
    char str[101];
    int strlen=0;
    int j=0;
    int result=0;

    scanf("%s",str);
    while(str[strlen]!='\0')
        strlen++;

    for(int i=0;i<strlen;i++) {

        if(str[i]=='c'){
            if(str[i+1]=='='||str[i+1]=='-')
                i++;
        }
        else if(str[i]=='d'){
            if(str[i+1]=='-')
                i++;
            else if(str[i+1]=='z'&&str[i+2]=='=')
                i+=2;
        }
        else if(str[i]=='l'&&str[i+1]=='j')
            i++;
        else if(str[i]=='n'&&str[i+1]=='j')
            i++;
        else if(str[i]=='s'&&str[i+1]=='=')
            i++;
        else if(str[i]=='z'&&str[i+1]=='=')
            i++;

        result++;

    }
    printf("%d",result);
    return 0;
}