#include<stdio.h>
int main(void){
    int t;
    int r;
    char str[20];

    scanf("%d",&t);

    for(int i=0;i<t;i++){
        int j=0;
        scanf("%d",&r);
        scanf("%s",str);

        while(str[j]!='\0'){
            for(int k=0;k<r;k++)
                printf("%c",str[j]);
            j++;
        }
        printf("\n");
    }
    
    return 0;
}