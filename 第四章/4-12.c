#include <stdio.h>

int main(void)
{
	int no,i=0;
	
	do {
		printf("������һ����������");
		scanf_s("%d", &no);
		if (no <= 0)
			puts("\a�벻Ҫ�������������");
	} while (no <= 0);
	printf("%dλ����",no);
	while (no > 0) {
		no /= 10;
		i++;
	}
	printf("%d", i);
	puts("��");
	return 0;
}


