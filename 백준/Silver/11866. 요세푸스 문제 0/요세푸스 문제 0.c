#include<stdio.h>
int main(void) {
    int n,k, s = 0;
    scanf("%d %d", &n,&k);
    int round[n];
    int result[n];
    int cnt = 0;

    for(int i=0;i<n;i++)
        round[i]=i+1;

    while (1) {
        int temp=0;
        for (int i = 0; i < n; i++) {
            if(round[i]!=0) temp++;
            if (round[i] != 0)
                cnt++;

            if (cnt == k) {
                result[s++] = round[i];
                cnt = 0;
                round[i] = 0;
            }
        }
        if(temp==0) break;
    }


    printf("<%d", result[0]);
    for (int i = 1; i < n; i++) {
        printf(", ");
        printf("%d", result[i]);
    }
    printf(">");
    return 0;
}