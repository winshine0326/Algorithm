#include<stdio.h>
int main(void){
    int n;
    int sum;
    int result=0;
    
    scanf("%d",&n);
    int a[n];
    
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    scanf("%d",&sum);
    
    for (int j=0;j<n;j++)
        if (a[j]==sum)
            result++;
    printf("%d",result);
    
    return 0;
}
