#include <stdio.h>

int main(void)
{
	int no;

	printf("������һ��������");scanf_s("%d", &no);
	
	switch (no%2)
	{
	case 0 :  puts("��������ż��"); break;
	default : puts("������������"); break;
		
	}


	return 0;
}

