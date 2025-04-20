#include <stdio.h>

int main() {
    // 두 개의 4x3 행렬 정의
    int A[4][3] = {
        {46, 79, 78},
        {35, 57, 28},
        {43, 68, 76},
        {56, 78, 98}
    };

    int B[4][3] = {
        {78, 35, 99},
        {85, 82, 34},
        {58, 69, 29},
        {34, 59, 35}
    };

    int sum[4][3];
    int diff[4][3];

    // 행렬의 합과 차 계산
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            diff[i][j] = A[i][j] - B[i][j];
        }
    }

    // 합 출력
    printf("[임정환씨] 위의 두 행렬 합의 결과값입니다.\n");
    printf("-------------------------\n");
    for (int i = 0; i < 4; i++) {
        printf("|");
        for (int j = 0; j < 3; j++) {
            printf(" %3d", sum[i][j]);
        }
        printf(" |\n");
    }

    // 차 출력
    printf("\n[임정환씨] 위의 두 행렬 차의 결과값입니다.\n");
    printf("-------------------------\n");
    for (int i = 0; i < 4; i++) {
        printf("|");
        for (int j = 0; j < 3; j++) {
            printf(" %3d", diff[i][j]);
        }
        printf(" |\n");
    }

    return 0;
}
