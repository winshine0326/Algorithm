#include<stdio.h>
int main(void){
    int n;
    int command,num;
    int arr[1000001]={0,};
    int last=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&command);
        if(command==1){
            last++;
            scanf("%d",&num);
            arr[last]=num;
        }
        else if(command==2){
            if(arr[last]==0)
                printf("-1\n");
            else {
                printf("%d\n", arr[last]);
                arr[last] = 0;
                last--;
            }
        }
        else if(command==3){
            printf("%d\n",last);
        }
        else if(command==4){
            if(last==0)
                printf("1\n");
            else
                printf("0\n");
        }
        else if(command==5){
            if(arr[last]==0)
                printf("-1\n");
            else {
                printf("%d\n", arr[last]);
            }
        }
    }
}