
#include <stdio.h>
#define size 5

int main()
{
	int a[size];
	int i;
	int* p;
	p = a;

	printf("%d개의 정수를 입력하시오:", size);

	for (i = 0; i < size; i++)
	{
		scanf_s("%d", &a[i]);
	}

	printf("역순:");

	for (i = size-1; i >= 0; i--)
	{
		printf(" %d", p[i]);
	}

	printf("\n20244354임정환");

	return 0;
}
