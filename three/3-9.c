#include <stdio.h>

int main(void)
{
	int  A, B, C, min;

	puts("��������������");
	printf("����A��"), scanf_s("%d", &A);
	printf("����B��"), scanf_s("%d", &B);
	printf("����C��"), scanf_s("%d", &C);

	min = (A < B) ? A : B;
	min = (C < min) ? C : min;
	printf("��Сֵ��%d��\n", min);


	return  0;
}
