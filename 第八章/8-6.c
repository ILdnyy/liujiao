#include <stdio.h>
int factorial(int n) {
	int i;
	int j=1;
	for (i = 1;i <= n;i++)
		j *= i;
	return j;
}

int main(void) {
	int n;
	printf("����һ����������\n");
	scanf_s("%d", &n);
	printf("%d�Ľ׳�Ϊ��%d\n",n, factorial(n));
	
	return 0;
}
