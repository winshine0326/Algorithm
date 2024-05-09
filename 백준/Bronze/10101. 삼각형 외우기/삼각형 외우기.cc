#include<stdio.h>
int main(void){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int sum = a+b+c;
    if(sum!=180)
        printf("Error\n");
    else if(a==b&&b==c)
        printf("Equilateral\n");
    else if(a==b||b==c||c==a)
        printf("Isosceles\n");
    else
        printf("Scalene\n");
    return 0;

}