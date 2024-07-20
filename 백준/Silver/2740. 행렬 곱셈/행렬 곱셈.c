#include<stdio.h>
int a[101][101];
int b[101][101];

int main(void){
    int x,y;
    int ax,ay;
    int bx,by;
    int result=0;

    scanf("%d %d",&ay,&ax);
    for(int i=0;i<ay;i++){
        for(int j=0;j<ax;j++){
            scanf("%d",&a[j][i]);
        }
    }
    scanf("%d %d",&by,&bx);
    for(int i=0;i<by;i++){
        for(int j=0;j<bx;j++){
            scanf("%d",&b[j][i]);
        }
    }
    for(int i=0;i<ay;i++,puts("")){
        for(int j=0;j<bx;j++,result=0) {
            for (int k = 0; k < ax; k++) {
                result+=a[k][i]*b[j][k];
            }
            printf("%d ",result);
        }
    }
}