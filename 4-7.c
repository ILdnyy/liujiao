#include <stdio.h>

int main(void)
{
	int no,i;

	printf("������һ����������");
	scanf_s("%d", &no);

	i = 2;
	while (i <= no) {

		printf("%d ", i);
		i *= 2;

	}
	printf("\n");
	
		

	return 0;
}

