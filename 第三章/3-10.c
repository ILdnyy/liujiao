#include <stdio.h>

int main(void)
{
	int A, B, C;

	puts("����������������");
	printf("����A��");scanf_s("%d", &A);
	printf("����B��");scanf_s("%d", &B);
	printf("����C��");scanf_s("%d", &C);

	if (A == B && B == C)
	    puts("����ֵ�����");
	else if (((A == B) && (B != C)) 
		|| ((B == C) && (B != A))
		|| ((A == C) && (A != B)))		
		puts("������ֵ��ȡ�");	
	else		
		puts("����ֵ������ͬ��"); 	
	return 0;
}

