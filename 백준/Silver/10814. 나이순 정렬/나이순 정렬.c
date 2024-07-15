#include<stdio.h>
#include<stdlib.h>
int compare (const void *a, const void *b)
{
    int num1 = *((int *)a);
    int num2 = *((int *)b);

    return (num1 - num2);
}

typedef struct {
    int age;
    char name[101];
}person;

person arr[100001];

int main(void){
    int n;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %s",&arr[i].age,arr[i].name);
    }
    qsort(arr,n,sizeof(person),compare);
    for(int i=0;i<n;i++){
        printf("%d %s\n",arr[i].age,arr[i].name);
    }
}