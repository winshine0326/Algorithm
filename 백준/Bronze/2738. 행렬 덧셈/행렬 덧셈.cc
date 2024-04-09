#include<stdio.h>
int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m],result[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            result[i][j]=0;
            scanf("%d", &a[i][j]);
            result[i][j]+=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            scanf("%d", &b[i][j]);
            result[i][j]+=b[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
