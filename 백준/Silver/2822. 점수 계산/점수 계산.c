#include<stdio.h>
typedef struct {
    int score;
    int num;
}quiz;
int main(void){
    quiz arr[8];
    quiz temp;
    int sum=0;
    int max,min;
    for(int i=0;i<8;i++) {
        scanf("%d", &arr[i].score);
        arr[i].num=i;
    }

    for(int i=0;i<8;i++){
        max=i;
        for(int j=i;j<8;j++){
            if(arr[j].score>arr[max].score)
                max=j;
        }
        temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }

    for(int i=0;i<5;i++) {
        sum += arr[i].score;
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i].num<arr[j].num){
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    printf("%d\n",sum);
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i].num+1);
    }
}