#include <stdio.h>

int main(void)
{
	int  x, y;

	puts("����������������");
	printf("����x��"); scanf_s("%d", &x);
	printf("����y��"); scanf_s("%d", &y);

	printf("x��ֵ��y��%.0f%%��\n",(double) x/y*100);

	return  0;

}


