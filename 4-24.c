#include    <stdio.h>
int main(void) {
	int i, j;
	int a;

	puts("����������һ����������");
	printf("�������м��㣺");   scanf_s("%d", &a);

	for (i = 1; i <= a; i++) {
		for (j = 1; j <= a-i; j++)
			putchar(' ');
		for (j = 1;j <= (i-1)*2+1;j++)
			printf("*");
		printf("\n");
	}

	return 0;
}