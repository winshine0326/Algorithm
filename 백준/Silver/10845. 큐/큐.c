#include<stdio.h>
int main(void){
    int n;
    int arr[10001]={0,};
    char command[15];
    int start=0,end=0;
    int num;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",command);
        if(command[0]=='p'){
            if(command[1]=='u'){
                scanf("%d",&num);
                arr[end]=num;
                end++;
            }
            else if(command[1]=='o'){
                if(arr[start]!=0) {
                    printf("%d\n", arr[start]);
                    arr[start] = 0;
                    if (start < end)
                        start++;
                }
                else
                    printf("-1\n");
            }
        }
        else if(command[0]=='s'){
            printf("%d\n",end-start);
        }
        else if(command[0]=='e'){
            if(end-start==0)
                printf("1\n");
            else
                printf("0\n");
        }
        else if(command[0]=='f'){
            if(arr[start]==0) printf("-1\n");
            else printf("%d\n",arr[start]);
        }
        else if(command[0]=='b'){
            if(arr[end-1]==0) printf("-1\n");
            else printf("%d\n",arr[end-1]);
        }
    }
}