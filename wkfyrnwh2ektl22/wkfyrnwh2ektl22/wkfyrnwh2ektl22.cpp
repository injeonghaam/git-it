﻿
#include <stdio.h>

int main() {
    char str[100];

    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("변환된 문자열: %s\n", str);

    return 0;
}