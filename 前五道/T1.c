#include <stdio.h>

int main(void)
{
	int a,b,c;
	int i = 0, j = 1, k = 2, h = 3;

	puts("���������ε����߳�");
	printf("��һ��");scanf_s("%d", &a);
	printf("�ڶ���");scanf_s("%d", &b);
	printf("������");scanf_s("%d", &c);

	if (a + b > c&&a + c > b&&b + c > a)
	{
		if (a = b && a == c && b == c)
			printf("%d", j);
		else if (a == b || a == c || b == c)
			printf("%d", k);
		else if (a != b && a != c && b != c)
			printf("%d", h);
	}
	else
		printf("%d", i);
		
		
		return 0;
}