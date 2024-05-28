#include<stdio.h>
int main(void){
    int t;
    int temp=1;
    while(1) {
        scanf("%d", &t);
        getchar();
        if (t == 0) break;
        char name[100][65];
        int num;
        char ch;
        int stnum[100]={0,};
        
        for (int i = 0; i < t; i++) {
            scanf("%[^\n]s", name[i]);
            getchar();
        }
        for(int i=0;i<t*2-1;i++){
            scanf("%d %c",&num,&ch);
            stnum[num-1]++;
        }
        for(int i=0;i<t;i++)
            if (stnum[i]==1) printf("%d %s\n",temp++,name[i]);
    }
}