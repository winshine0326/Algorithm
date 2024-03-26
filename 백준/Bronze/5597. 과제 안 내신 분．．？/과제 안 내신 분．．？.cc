#include<stdio.h>
int main(void){
    int a[30]={0,};
    int n;
    int m[2];
    int i=0;

    for (int i=0;i<28;i++){
        scanf("%d",&n);
        a[n-1]=n;
    }
    for(int j=0;j<30;j++){
        if (a[j]==0)
            m[i++]=j+1;
    }
    printf ("%d\n%d",m[0],m[1]);
    
    return 0;
}
