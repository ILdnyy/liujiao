#include <stdio.h>

int sqr(int x)
{
	return x*x;
}
int pow4(int x)
{
	return sqr(x)*sqr(x);
}

int main(void) {

	int i;

	puts("������һ��������");
	printf("����i��");scanf_s("%d", &i);

	printf("����i���Ĵ�����%d��\n", pow4(i));

	return 0;
}
