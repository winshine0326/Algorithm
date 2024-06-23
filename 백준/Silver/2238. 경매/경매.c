#include<stdio.h>
typedef struct{
    int price;
    char name[12];
}person;
int main(void){
    int t,min_price,min_cnt;
    person man[100001];
    int num[10001]={0,};
    int swt=0;

    scanf("%d %d",&min_price,&t);
    for(int i=0;i<t;i++){
        scanf("%s %d",man[i].name,&man[i].price);
        num[man[i].price]++;
    }
    for(int i=0;i<t;i++)
        if(man[i].price<min_price)
            min_price=man[i].price;

    min_cnt=min_price;

    for(int i=0;i<10001;i++)
        if (num[i] != 0 && num[min_cnt] > num[i])
            min_cnt=i;

    for(int i=0;i<t;i++) {
        if (man[i].price == min_cnt) {
            printf("%s %d",man[i].name,man[i].price);
            break;
        }
    }
}