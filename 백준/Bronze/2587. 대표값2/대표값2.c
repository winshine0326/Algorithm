#include<stdio.h>
int main(void){
    int num[5];
    int sum=0;
    int temp;

    for(int i=0;i<5;i++){
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(num[j]>num[i]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("%d\n%d",sum/5,num[2]);
    return 0;
}