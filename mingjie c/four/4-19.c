#include <stdio.h>

int main(void)
{
	int n, i,t=0;

	printf("����ֵ��");scanf_s("%d", &n);

	for (i = 1;i <= n;i++) {
		if (n%i == 0)
			printf("%d\n", i);
		if (n%i == 0)
		t++;
	}
	
	printf("Լ����%d��\n",t);
	return 0;
}