#include <stdio.h>

int min2(int a, int b) {
	if (a < b)
		return a;
	else
		return b;
}

int main(void) {

	int i, j;

	puts("����������������");
	printf("����1��");scanf_s("%d", &i);
	printf("����2��");scanf_s("%d", &j);

	printf("��С��������%d��\n", min2(i, j));

	return 0;
}
