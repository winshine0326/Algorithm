#include<stdio.h>
int main(void){
    int a[9][9];
    int max=0;
    int max_index[2]={};//[0] == x [1] == y

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<9;i++) {
        for (int j = 0; j < 9; j++) {
            if (max < a[i][j]) {
                max = a[i][j];
                max_index[0] = i;
                max_index[1] = j;
            }
        }
    }
    printf("%d\n%d %d",max,max_index[0]+1,max_index[1]+1);
}