#include <stdio.h>

int main(void)
{
	int A, B;

	puts("����������������");
	printf("����A��");scanf_s("%d", &A);
	printf("����B��");scanf_s("%d", &B);
	

	if ((A - B <= 10 )||( B - A <= 10))
	    puts("���ǵĲ�С�ڵ���10");	
	else		
		puts("���ǵĲ���ڵ���11");


	return 0;
}

