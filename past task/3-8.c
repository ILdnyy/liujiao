#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("����������������");
	printf("����1��");scanf_s("%d",&n1);
	printf("����2��");scanf_s("%d", &n2);

	if (n1 >= n2)
		printf("���ǵĲ���%d��\n", n1 - n2);
	else 
		printf("���ǵĲ���%d��\n", n2 - n1);
	return  0;
}

