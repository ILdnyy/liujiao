#include <stdio.h>

int main(void)
{
	int     a;
	double  b;

	printf("�������һ��ʵ����"); scanf_s("%d",  &a);
	printf("������ڶ���ʵ����"); scanf_s("%lf", &b);
	printf("������ĵ�һ��ʵ����%d��\n", a);
	printf("������ĵڶ���ʵ����%f��\n", b);
	printf("a*b=%d\n", a*b);

	return  0;

}

