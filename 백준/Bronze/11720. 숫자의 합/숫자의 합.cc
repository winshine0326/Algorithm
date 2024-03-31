#include<stdio.h>
int main(void) {
    int n;
    int result=0;
    scanf("%d",&n);
    char arr[n];
    
    scanf("%s",arr);
    
    for(int i=0;i<n;i++)
        result+=arr[i]-48;
    printf("%d",result);

    return 0;
}