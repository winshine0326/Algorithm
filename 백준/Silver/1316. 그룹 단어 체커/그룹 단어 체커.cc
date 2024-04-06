#include<stdio.h>
int main(void){
    int n;
    char str[100];
    int a[26]={0};
    int result=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int sum=1;
        int strlen=0;

        scanf("%s",str);

        while(str[strlen]!='\0')
            strlen++;

        if(strlen!=1) {
            for (int j = strlen - 1; j >= 0; j--) {
                if (str[j] != str[j - 1]) {
                    for (int k = j - 2; k >= 0; k--) {
                        if (str[j] == str[k]) {
                            sum = 0;
                            break;
                        }
                    }
                }
            }
        }
        result+=sum;
    }
    printf("%d",result);

}