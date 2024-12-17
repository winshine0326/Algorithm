#include <stdio.h>

int main(void) {
    int n, k;
    int A[10001];
    int count = 0;

    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &A[i]);
    }

    for (int last = n; last >= 2; last--) {
        int max_idx = 1;
        for (int i = 2; i <= last; i++) {
            if (A[i] > A[max_idx]) {
                max_idx = i;
            }
        }

        if (last != max_idx) {
            int temp = A[last];
            A[last] = A[max_idx];
            A[max_idx] = temp;

            count++;
            if (count == k) {
                if (A[last] < A[max_idx]) {
                    printf("%d %d", A[last], A[max_idx]);
                } else {
                    printf("%d %d", A[max_idx], A[last]);
                }
                return 0;
            }
        }
    }

    printf("-1");
}
