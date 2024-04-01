#include<stdio.h>

int main(void) {
    char a[4];
    char b[4];
    char temp;

    scanf("%s", a);
    scanf("%s", b);

    temp = a[0];
    a[0] = a[2];
    a[2] = temp;

    temp = b[0];
    b[0] = b[2];
    b[2] = temp;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            printf("%s", a);
            break;
        } else if (a[i] < b[i]) {
            printf("%s", b);
            break;
        }
    }

    return 0;
}
