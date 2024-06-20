#include<stdio.h>
int main(void){
    int n;
    int stack[10001]={0,};
    char command[50];
    int push,pre=0;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",command);
        if(command[0]=='p'){
            if(command[1]=='u'){
                pre++;
                scanf("%d",&push);
                stack[pre]=push;
            }
            else{
                if(stack[pre]!=0) {
                    printf("%d\n", stack[pre]);
                    stack[pre] = 0;
                    pre--;
                }
                else printf("%d\n",-1);
            }
        }
        else if(command[0]=='s')
            printf("%d\n",pre);
        else if(command[0]=='e')
            printf("%d\n",pre?0:1);
        else if(command[0]=='t')
            printf("%d\n",stack[pre]?stack[pre]:-1);

    }
}