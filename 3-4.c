#include <stdio.h>

int main(void)
{
	int  A,B;

	puts("��������������");
	printf("����A��"), scanf_s("%d", &A);
	printf("����B��"), scanf_s("%d", &B);

	if (A == B)
		puts("A����B��");
	else if (A < B)
		puts("AС��B��");
	else if (A > B)
		puts("A����B��");


	return  0;
}

