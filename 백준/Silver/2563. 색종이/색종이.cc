#include<stdio.h>

int arr[101][101];
int main(void){
    int n;
    int x,y;
    int result=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d %d",&y,&x);
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++) {
                if(arr[y+j][x+k]==1) {
                    arr[y+j][x+k]=0;
                    result--;
                }
                arr[y + j][x + k]=1;
                result++;
            }
        }
    }
    printf("%d",result);

}