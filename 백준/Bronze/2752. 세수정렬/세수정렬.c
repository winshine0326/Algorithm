#include<stdio.h>
int main(void){
    int a[3];
    int temp;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("%d %d %d",a[0],a[1],a[2]);
    return 0;
}