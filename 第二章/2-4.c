#include <stdio.h>

int main(void)
{
	int     a,c;
	double  b,d;
	c = 6;
	d = 8;

	printf("�������һ��ʵ����"); scanf_s("%d", &a);
	printf("������ڶ���ʵ����"); scanf_s("%lf", &b);
	printf("������ĵ�һ��ʵ����%d��\n", a);
	printf("������ĵڶ���ʵ����%f��\n", b);
	printf("a*b=%f\n", a*b);
	printf("a/b=%f\n", a / b);
	printf("a*c=%d\n", a*c);

	return  0;

}

