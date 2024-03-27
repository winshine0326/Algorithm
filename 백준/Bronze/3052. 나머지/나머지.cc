#include<stdio.h>
int main(void){
    int arr[10];
    int temp;
    int count=1;
    
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        arr[i]%=42;
    }
    
    for(int i=0;i<10;i++){
        for (int j=i;j<10;j++){
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    } // 오름차순으로 정렬
    
    temp=arr[0];
    for(int i=0;i<10;i++){
        if(temp!=arr[i]){
            count++;
            temp=arr[i];
        }
    }
    
    printf("%d",count);
    
    return 0;
    
}
