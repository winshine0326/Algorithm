#include<stdio.h>
int main(void){
    int n;
    while(1){
        int sum=0;
        scanf("%d",&n);
        if(n==-1)
            break;

        for(int i=1;i<=n/2;i++){
            if(n%i==0)
                sum+=i;
        }
        if (sum == n){
            printf("%d = %d",n,1);
            for(int j=2;j<=n/2;j++) {
                if(n%j==0) {
                    printf(" + %d", j);
                }
            }
            puts("");
        }
        else
            printf("%d is NOT perfect.\n",n);
    }
    return 0;
}