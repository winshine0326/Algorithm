#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void){
    char arr[100000];
    int n;
    long long int result=0;
    scanf("%s",arr);
    getchar();
    scanf("%d",&n);
    unsigned int len=strlen(arr);
    for(int i=0;i<len;i++){
        long long int sum=0;
        if (arr[i]>='0'&&arr[i]<='9')
            sum=arr[i]-48;
        else if(arr[i]>='A'&&arr[i]<='Z')
            sum=arr[i]-55;
        result+=sum*pow(n,len-1-i);
    }

    printf("%lld",result);
}