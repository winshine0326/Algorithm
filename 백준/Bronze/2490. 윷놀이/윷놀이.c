#include<stdio.h>
int main(void){
    int temp;

    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            scanf("%d",&temp);
            sum+=temp;
        }
        if(sum==4)
            printf("E\n");
        else
            printf("%c\n",68-sum);
    }
    return 0;
}