#include <stdio.h>

int main(void)
{
	int  A, B, C,D,max;

	puts("�������ĸ�����");
	printf("����A��"), scanf_s("%d", &A);
	printf("����B��"), scanf_s("%d", &B);
	printf("����C��"), scanf_s("%d", &C);
	printf("����D��"), scanf_s("%d", &D);

	max = A;
	if (B > max) max = B;
	if (C > max) max = C;
	if (D > max) max = D;
	printf("���ֵ��%d��\n", max);


	return  0;
}

