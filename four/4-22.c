#include    <stdio.h>
int main(void)  {
	int i, j;
	int a,b,temp;

	puts("����������һ��������");
	printf("һ�ߣ�");     scanf_s("%d", &a);
	printf("��һ�ߣ�");   scanf_s("%d", &b);

	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}

	for (i = 1; i <= a; i++) {
		for (j = 1; j <= b; j++)
		     printf("*");
		printf("\n");	
	}

	return 0;
}