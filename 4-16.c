#include <stdio.h>

int main(void)
{
	int n, i ;

	printf("������һ��������");scanf_s("%d", &n);

	for (i = 1;i <= n;i+=2) {
		printf("%d ", i );
	}
	printf("\n");
	return 0;
}