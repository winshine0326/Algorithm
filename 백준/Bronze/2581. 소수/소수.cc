#include<stdio.h>
int main(void){
    int m,n;
    int sum=0;

    scanf("%d",&m);
    scanf("%d",&n);
    int min=0;
    for(int i=m;i<=n;i++){
        int temp=0;
        for(int j=2;j<i;j++){
            if(i%j==0)
                break;
            else
                temp++;
        }
        if(temp==i-2){
            sum+=i;
            if(min==0)
                min=i;
        }
    }
    if(sum==0) {
        printf("-1");
        return 0;
    }
    printf("%d\n%d",sum,min);

    return 0;
}