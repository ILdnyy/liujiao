#include <stdio.h>

int main(void)
{
	int  no;

	printf("������һ������:");
	scanf_s("%d", &no);

	if (no == 0)
		puts("������Ϊ0");
	else if (no > 0)
		puts("������Ϊ������");
	else if (no <0)
		puts("������Ϊ������");


	return  0;
}
