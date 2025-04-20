#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char name[30];
    char phone[20];
    char address[100];
    char birthday[20];
} Contact;

Contact contacts[MAX];
int count = 0;

void viewContacts() {
    if (count == 0) {
        printf("\n[주소록이 비어 있습니다.]\n");
        return;
    }

    printf("\n[주소록 목록]\n");
    printf("------------------------------------------------------------\n");
    printf("이름\t\t전화번호\t\t주소\t\t\t생일\n");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-10s\t%-15s\t\t%-20s\t%-10s\n",
            contacts[i].name,
            contacts[i].phone,
            contacts[i].address,
            contacts[i].birthday);
    }
}

void addContact() {
    if (count >= MAX) {
        printf("주소록이 가득 찼습니다.\n");
        return;
    }

    printf("\n[주소록 추가]\n");
    printf("이름: ");
    fgets(contacts[count].name, sizeof(contacts[count].name), stdin);
    contacts[count].name[strcspn(contacts[count].name, "\n")] = '\0'; // 개행 제거

    printf("전화번호: ");
    fgets(contacts[count].phone, sizeof(contacts[count].phone), stdin);
    contacts[count].phone[strcspn(contacts[count].phone, "\n")] = '\0';

    printf("주소: ");
    fgets(contacts[count].address, sizeof(contacts[count].address), stdin);
    contacts[count].address[strcspn(contacts[count].address, "\n")] = '\0';

    printf("생일: ");
    fgets(contacts[count].birthday, sizeof(contacts[count].birthday), stdin);
    contacts[count].birthday[strcspn(contacts[count].birthday, "\n")] = '\0';

    count++;
    printf("연락처가 추가되었습니다.\n");
}

void searchContact() {
    char keyword[30];
    int found = 0;

    printf("\n[주소록 탐색]\n");
    printf("찾을 이름을 입력하세요: ");
    fgets(keyword, sizeof(keyword), stdin);
    keyword[strcspn(keyword, "\n")] = '\0';

    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, keyword) == 0) {
            printf("\n[연락처 찾음]\n");
            printf("이름: %s\n", contacts[i].name);
            printf("전화번호: %s\n", contacts[i].phone);
            printf("주소: %s\n", contacts[i].address);
            printf("생일: %s\n", contacts[i].birthday);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("해당 이름의 연락처를 찾을 수 없습니다.\n");
    }
}

void deleteContact() {
    char keyword[30];
    int index = -1;

    printf("\n[주소록 삭제]\n");
    printf("삭제할 이름을 입력하세요: ");
    fgets(keyword, sizeof(keyword), stdin);
    keyword[strcspn(keyword, "\n")] = '\0';

    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, keyword) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("해당 이름의 연락처를 찾을 수 없습니다.\n");
        return;
    }

    for (int i = index; i < count - 1; i++) {
        contacts[i] = contacts[i + 1];
    }
    count--;

    printf("연락처가 삭제되었습니다.\n");
}

int main() {
    int choice;

    strcpy_s(contacts[0].name, "홍길동");
    strcpy_s(contacts[0].phone, "010-1234-5678");
    strcpy_s(contacts[0].address, "서울특별시 종로구");
    strcpy_s(contacts[0].birthday, "1990-05-01");

    strcpy_s(contacts[1].name, "김철수");
    strcpy_s(contacts[1].phone, "010-8765-4321");
    strcpy_s(contacts[1].address, "부산광역시 해운대구");
    strcpy_s(contacts[1].birthday, "1985-11-12");

    strcpy_s(contacts[2].name, "이영희");
    strcpy_s(contacts[2].phone, "010-9988-1122");
    strcpy_s(contacts[2].address, "대전광역시 유성구");
    strcpy_s(contacts[2].birthday, "2001-02-28");

    count = 3;


    while (1) {
        printf("\n===== 주소록 프로그램 =====\n");
        printf("1. 목록 보기\n");
        printf("2. 추가하기\n");
        printf("3. 탐색하기\n");
        printf("4. 삭제하기\n");
        printf("0. 종료\n");
        printf("==========================\n");
        printf("원하는 메뉴를 선택하세요: ");
        scanf_s("%d", &choice);
        getchar();

        switch (choice) {
        case 1:
            viewContacts();
            break;
        case 2:
            addContact();
            break;
        case 3:
            searchContact();
            break;
        case 4:
            deleteContact();
            break;
        case 0:
            printf("프로그램을 종료합니다.\n");
            return 0;
        default:
            printf("올바른 메뉴 번호를 입력하세요.\n");
        }
    }

    return 0;
}
