#include<stdio.h>
#include<math.h>
int main(void){
    int a,b,v;
    int result;
    scanf("%d %d %d",&a,&b,&v);
    result=ceil((double)(v-a)/(a-b));
    result++;
    printf("%d",result);
}