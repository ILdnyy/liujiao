#include <stdio.h>

int sqr(int x)
{
	return x*x*x;
}

int main(void) {

	int i;

	puts("������һ��������");
	printf("����i��");scanf_s("%d", &i);

	printf("����i��������%d��\n", sqr(i));

	return 0;
}
