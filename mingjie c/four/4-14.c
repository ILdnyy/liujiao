#include <stdio.h>

int main(void)
{
	int n,i=1;

	printf("������һ��������");scanf_s("%d", &n);

	while (i <=n ) {
		printf("%d", i % 10);
		i++;
	}
	printf("\n");
	return 0;
}


