#include<stdio.h>
int main(void){
    int n;
    int result=0;
    int arr[6]={500,100,50,10,5,1};
    scanf("%d",&n);
    n=1000-n;
    for(int i=0;i<6;i++){
        result+=n/arr[i];
        n=n%arr[i];
    }
    printf("%d",result);
}