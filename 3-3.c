#include <stdio.h>

int main(void)
{
	int  no;

	printf("������һ������:");
	scanf_s("%d", &no);

	if (no > 0)
		printf("����ֵ��%d��\n",no);
	else if (no < 0)
	    printf("����ֵ��%d��\n", -no);


	return  0;
}

