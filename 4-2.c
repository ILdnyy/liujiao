#include <stdio.h>

int main(void)
{
	int  a,b,min,max;
	int  sum = 0;

	puts("��������������:");
	printf("����a:");scanf_s("%d", &a);
	printf("����b:");scanf_s("%d", &b);

	min = (a > b) ? b : a;
	max = (a > b) ? a : b;
	do {
		sum += min;
		min++;
	} while (min <= max);
	printf("���ڵ���28С�ڵ���37��������������%d��\n", sum);
	return  0;
}