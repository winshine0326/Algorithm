#include <stdio.h>

int main(void) {
    int n;
    int arr[1001];
    int stack[1001];
    int top = -1;
    int pre = 1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        while (top >= 0 && stack[top] == pre) {
            top--;
            pre++;
        }
        if (arr[i] == pre) {
            pre++;
        } else {
            top++;
            stack[top] = arr[i];
        }
    }

    while (top >= 0 && stack[top] == pre) {
        top--;
        pre++;
    }

    if (top == -1) {
        printf("Nice");
    } else {
        printf("Sad");
    }

    return 0;
}
