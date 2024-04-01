#include<stdio.h>
int main(void){
    char s[100];
    int arr[26];
    int j=0;
    scanf("%s",s);

    for(int i=0;i<26;i++)
        arr[i]=-1;

    while(s[j]!='\0'){
        if(arr[s[j]-97]==-1)
            arr[s[j]-97]=j;
        j++;
    }

    for(int i=0;i<26;i++)
        printf("%d ",arr[i]);

    return 0;
}