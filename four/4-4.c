#include <stdio.h>

int main(void)
{
	int no;

	printf("������һ����������");
	scanf_s("%d", &no);

	while (no >= 1) {
		printf("%d ", no--);
	}
	if (no >= 1) 
		printf("\n");
		

	return 0;
}

