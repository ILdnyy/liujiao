#include <stdio.h>

int sumup(int n)
{
	int a;
	int x=0;
	for (a = 1;a <= n;a++)
		x += a;
	return x;
}

int main(void) {
	int n;

	printf("����n��");scanf_s("%d", &n);
	printf("1��%d�ĺ���%d��\n",n, sumup(n));

	return 0;
}
