#include <stdio.h>

int main(void)
{
	int a,b,c;

	printf("��ͷ��ֵ��cm����");scanf_s("%d", &a);
	printf("������ֵ��cm����");scanf_s("%d", &b);
	printf("�����ֵ��cm����");scanf_s("%d", &c);

	while (a <=b ) {
		printf("%dcm      %.2fkg\n", a,0.9*(a-100));
		a += c;
	}
	printf("\n");
	return 0;
}


