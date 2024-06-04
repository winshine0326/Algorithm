#include<stdio.h>
typedef struct{
    int x;
    int y;
} position;
int main(void){
    int n,m;
    position a[2];
    int result=0;
    int board[100][100]={0,};
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&a[0].x,&a[0].y,&a[1].x,&a[1].y);
        for(int k=a[0].y-1;k<a[1].y;k++)
            for (int j = a[0].x - 1; j < a[1].x; j++)
                board[k][j]++;
    }
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
            if(board[i][j]>m) result++;

    printf("%d",result);
}