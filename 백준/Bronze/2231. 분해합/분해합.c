#include<stdio.h>
int num(int n){
    int sum=n;
    for(int i=0;i<7;i++) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main(void){
    int n;
    int result=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(num(i)==n){
            result=i;
            break;
        }
    }
    printf("%d",result);
    return 0;
}