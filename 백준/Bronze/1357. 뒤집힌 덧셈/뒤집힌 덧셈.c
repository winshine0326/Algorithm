#include<stdio.h>
int main(void){
    int x,y;
    int Xrev=0,Yrev=0;
    int result=0;
    scanf("%d %d",&x,&y);

    if (x<10) Xrev=x;

    else {
        int tempX = x;
        int temp = 1;
        while (tempX >= 10) {
            temp *= 10;
            tempX /= 10;
        }
        while (x > 0) {
            Xrev += (x % 10) * temp;
            temp /= 10;
            x /= 10;
        }
    }
    if (y<10) Yrev=y;
    else {
        int tempY = y;
        int temp = 1;
        while (tempY >= 10) {
            temp *= 10;
            tempY /= 10;
        }
        while (y > 0) {
            Yrev += (y % 10) * temp;
            temp /= 10;
            y /= 10;
        }
    }

    int sum=Xrev+Yrev;
    int tempsum = sum;
    int temp = 1;
    while (tempsum >= 10) {
        temp *= 10;
        tempsum /= 10;
    }
    while (sum > 0) {
        result += (sum % 10) * temp;
        temp /= 10;
        sum /= 10;
    }
    printf("%d",result);
}