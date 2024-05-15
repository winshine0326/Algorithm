#include<stdio.h>
int main(void){
    int n;
    int temp;
    int result;
    for(int i=0;i<8;i++){
        temp=n;
        scanf("%d",&n);

        if(i==0)
            continue;
        if(temp-1==n)
            result=0;
        else if(temp+1==n)
            result=1;
        else {
            printf("mixed\n");
            return 0;
        }
    }
    if(result==1)
        printf("ascending\n");
    else
        printf("descending\n");
    return 0;
}