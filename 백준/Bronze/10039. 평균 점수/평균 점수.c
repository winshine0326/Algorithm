#include<stdio.h>
int main(void){
    int temp;
    int result=0;

    for(int i=0;i<5;i++){
        scanf("%d",&temp);
        if(temp<=40)
            temp=40;
        result+=temp;
    }
    printf("%d",result/5);
}