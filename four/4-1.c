#include <stdio.h>

int main(void)
{
	int  retry;

	do {
		int no;

		printf("������һ������:");
		scanf_s("%d", &no);

		if (no == 0)
			puts("������Ϊ0");
		else if (no > 0)
			puts("������Ϊ������");
		else if (no < 0)
			puts("������Ϊ������");
		printf("Ҫ�ظ�һ���𣿡�yes������0/no������9����");
		scanf_s("%d", &retry);
	} while (retry == 0);

	return  0;
}
