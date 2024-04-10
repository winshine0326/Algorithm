#include<stdio.h>
#include<string.h>

char str[6][16];

int main(void){

    for(int i=0;i<5;i++){
        scanf("%s",str[i]);
    }

    for(int i=0;i<15;i++){
        for (int j=0;j<5;j++){
            if(str[j][i] != NULL)
                printf("%c",str[j][i]);
        }
    }
}