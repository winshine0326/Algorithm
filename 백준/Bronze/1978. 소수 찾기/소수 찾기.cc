#include<stdio.h>
int main(void){
    int n;
    int x;
    int count=0;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        for(int j=x-1;j>=1;j--){
            if(j==1)
                count++;
            if(x%j==0) {
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}