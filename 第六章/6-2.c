#include <stdio.h>

int min2(int a, int b,int c) {
	int min = a;

	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}

int main(void) {

	int i, j,k;

	puts("����������������");
	printf("����1��");scanf_s("%d", &i);
	printf("����2��");scanf_s("%d", &j);
	printf("����3��");scanf_s("%d", &k);

	printf("��С��������%d��\n", min2(i, j,k));

	return 0;
}
