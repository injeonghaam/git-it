
#include <stdio.h>

void swap(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float num1, num2;

    printf("첫 번째 실수를 입력하세요: ");
    scanf_s("%f", &num1);
    printf("두 번째 실수를 입력하세요: ");
    scanf_s("%f", &num2);

    printf("\n교환 전 | 첫 번째 실수 = %g, \t두 번째 실수 = %g\n", num1, num2);

    swap(&num1, &num2);

    printf("교환 후 | 첫 번째 실수 = %g, \t두 번째 실수 = %g\n", num1, num2);

    return 0;

}
