#include <stdio.h>

int main(void)
{
	int  A, B, C,min;

	puts("��������������");
	printf("����A��"), scanf_s("%d", &A);
	printf("����B��"), scanf_s("%d", &B);
	printf("����C��"), scanf_s("%d", &C);

	min = A;
	if (B < min) min = B;
	if (C < min) min = C;
	printf("��Сֵ��%d��\n", min);


	return  0;
}

