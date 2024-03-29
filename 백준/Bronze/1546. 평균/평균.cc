#include<stdio.h>
int main(void) {
    int n, max;
    int temp;
    scanf("%d", &n);
    int arr[n];
    double result=0;

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        for (int j =i; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    } //오름차순 정렬
    max = arr[n - 1];
    for (int i = 0; i < n; i++)
        result += (double)arr[i]/max*100;
    result /= n;
    
    printf("%lf", result);
    
    return 0;
}