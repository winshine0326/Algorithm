#include<stdio.h>
#include<stdlib.h>


typedef struct {
    int start;
    int end;
}class;

int compare(const void *a,const void *b){
    class* p1 = (class*)a;
    class* p2 = (class*)b;
    if (p1->end == p2->end)
    {
        if (p1->start > p2->start)
            return 1;
        else if (p1->start < p2->start)
            return -1;
        else
            return 0;
    }
    else if (p1->end > p2->end)
        return 1;
    else
        return -1;
}

int main(void){
    int n;
    int min,pre;
    int result=1;
    class temp;

    class arr[100001];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d %d",&arr[i].start,&arr[i].end);

    qsort(arr,n,sizeof(class),compare);


    pre=arr[0].end;
    for(int i=1;i<n;i++){
        if(pre<=arr[i].start){
            pre=arr[i].end;
            result++;
        }
    }
    printf("%d",result);
}