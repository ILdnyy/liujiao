#include    <stdio.h>
int main(void) {
	int i, j;
	int a, b;

	puts("����������һ����������");
	printf("�������м��㣺");   scanf_s("%d", &a);

	b = a;
	for (i = 1; i <= a; i++) {
		for (j = 1; j <= i; j++)
			putchar(' ');
		for (j = 1;j <= b * 2 - 1;j++)
			printf("%d", i % 10);
		printf("\n");
		b--;
	}

	return 0;
}