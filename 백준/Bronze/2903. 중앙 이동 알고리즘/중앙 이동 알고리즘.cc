#include<stdio.h>
#include<math.h>

int main(void){
    int n;
    scanf("%d",&n);
    int result=2;
    for(int i=0;i<n;i++){
        result+=result-1;
    }
    printf("%d",(int)pow(result,2));
}