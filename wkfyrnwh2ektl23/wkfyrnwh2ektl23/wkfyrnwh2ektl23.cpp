
#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int len = strlen(str);

    printf("역순 출력: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[2000];

    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);

    reverse(str);

    return 0;
}
