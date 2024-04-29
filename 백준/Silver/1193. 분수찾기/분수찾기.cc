#include<stdio.h>
int main(void){
    int n;
    int a=1,b=1;
    int asum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(a==1) {
          a+=asum++;
          b=1;
          continue;
        }
        else{
            a--;
            b++;
        }
    }
    if (asum%2==0){
        int temp=a;
        a=b;
        b=temp;
    }
    printf("%d/%d",a,b);

    return 0;
}