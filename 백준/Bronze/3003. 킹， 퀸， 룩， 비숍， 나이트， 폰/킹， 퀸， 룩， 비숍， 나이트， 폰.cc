#include <stdio.h>

int main(void) {
    int my_chess[6];
    int chess[6]={1,1,2,2,2,8};
    int need=1;

    for(int i=0;i<6;i++)
        scanf("%d", &my_chess[i]);

    for(int i=0;i<6;i++){
        printf("%d ",chess[i]-my_chess[i]);
    }
    return 0;
}