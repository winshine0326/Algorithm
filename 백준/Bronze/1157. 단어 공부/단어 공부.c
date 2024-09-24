#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000001];
    int alpha[26] = {0};
    int len, flag = 0;

    // 입력 받기
    scanf("%s", s);
    len = strlen(s);

    // 알파벳 빈도수 계산
    for (int i = 0; i < len; i++) {
        char temp = tolower(s[i]);  // 소문자로 변환
        if (temp >= 'a' && temp <= 'z') {
            alpha[temp - 'a']++;
        }
    }

    // 가장 많이 등장한 알파벳 찾기
    int max = 0;
    char max_alpha = '?';

    for (int i = 0; i < 26; i++) {
        if (alpha[i] > max) {
            max = alpha[i];
            max_alpha = 'A' + i;  // 대문자로 변환
            flag = 0;
        } else if (alpha[i] == max) {
            flag = 1;
        }
    }

    // 결과 출력
    if (flag == 1) {
        printf("?\n");
    } else {
        printf("%c\n", max_alpha);
    }

    return 0;
}
