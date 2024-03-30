#include<stdio.h>
int main(void){
    int t;
    char str[1000];
    char m;

    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",str);
        int temp=0;
        for(int j=0;j<=temp;j++){
            if(str[j]!='\0')
                temp++;
            else
                m=str[j-1];
        }
        printf("%c%c\n",str[0],m);
    }
    return 0;
}